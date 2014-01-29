/***************************************************************************
 *   Copyright (C) by GFZ Potsdam                                          *
 *                                                                         *
 *   You can redistribute and/or modify this program under the             *
 *   terms of the SeisComP Binary License.                                 *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   SeisComP Binary License for more details.                             *
 ***************************************************************************/



#ifndef __SEISCOMP_GUI_MAP_TEXTURECACHE_H__
#define __SEISCOMP_GUI_MAP_TEXTURECACHE_H__


#include <QHash>
#include <QMap>
#include <QImage>
#include <QPair>

#include <seiscomp3/core/baseobject.h>
#include <seiscomp3/core/datetime.h>
#include <seiscomp3/gui/map/maptree.h>
#include <seiscomp3/gui/qt4.h>


namespace Seiscomp {
namespace Gui {
namespace Map {


class ImageTree;


union Coord {
	enum limits {
		fraction_half_max = Q_INT64_C(2147483648),
		fraction_max = Q_INT64_C(4294967296),
		fraction_shift = 32
	};

	typedef qint64 value_type;
	typedef quint32 part_type;

	Coord() {}
	Coord(value_type v) : value(v) {}

	struct {
		part_type lo;
		part_type hi;
	} parts;
	value_type value;
};


struct SC_GUI_API TextureID {
	int level;
	int row;
	int column;

	TextureID() {}
	TextureID(int l, int r, int c) : level(l), row(r), column(c) {}

	bool operator==(const TextureID &other) const {
		return level == other.level &&
		       row == other.row &&
		       column == other.column;
	}

	bool operator!=(const TextureID &other) const {
		return level != other.level ||
		       row != other.row ||
		       column != other.column;
	}
};



DEFINE_SMARTPOINTER(Texture);

struct SC_GUI_API Texture : public Core::BaseObject {
	Texture();

	int numBytes() const;
	bool load(Alg::MapTreeNode *node);

	QImage image;
	const QRgb *data;
	TextureID id;
	quint32 w;
	quint32 h;
	qint64 lastUsed;
};


DEFINE_SMARTPOINTER(TextureCache);

class SC_GUI_API TextureCache : public Core::BaseObject {
	public:
		TextureCache(ImageTree* mapTree, bool mercatorProjected);
		~TextureCache();

		void beginPaint();

		void setCacheLimit(int limit);
		void setCurrentTime(const Core::Time &t);

		int maxLevel() const;
		int tileWidth() const;
		int tileHeight() const;

		bool isMercatorProjected() const { return _isMercatorProjected; }

		void getTexel(QRgb &c, Coord u, Coord v, int level);
		void getTexelBilinear(QRgb &c, Coord u, Coord v, int level);

		Texture *get(const TextureID &id);

		const quint64 &startTick() const { return _currentTick; }

		static bool load(QImage &img, const char *name);


	private:
		Alg::MapTreeNode *
		getNode(Alg::MapTreeNode *node, const TextureID &id) const;

		static void remove(const char *name);


	private:
		typedef QHash<TextureID, Texture*> Lookup;
		typedef QMap<Alg::MapTreeNode*, TexturePtr> Storage;

		ImageTree        *_mapTree;
		bool              _isMercatorProjected;
		Lookup            _firstLevel;
		Storage           _storage;
		int               _storedBytes;
		int               _textureCacheLimit;
		quint64           _currentTick;

		Texture          *_lastTile[2];
		TextureID         _lastId[2];
		int               _currentIndex;

		typedef QPair<QImage, int> CacheEntry;
		typedef QMap<QString, CacheEntry> ImageCache;

		static  ImageCache _images;
};


void getTexel(QRgb &c, const QRgb *data, int w, int h, Coord u, Coord v);
void getTexelBilinear(QRgb &c, const QRgb *data, int w, int h, Coord u, Coord v);


}
}
}


#endif
