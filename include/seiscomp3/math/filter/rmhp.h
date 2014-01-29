/***************************************************************************
 *   Copyright (C) by GFZ Potsdam                                          *
 *                                                                         *
 *   You can redistribute and/or modify this program under the             *
 *   terms of the SeisComP Public License.                                 *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   SeisComP Public License for more details.                             *
 ***************************************************************************/


#ifndef _SEISCOMP_FILTERING_RMHP_H_
#define _SEISCOMP_FILTERING_RMHP_H_

#include<vector>

#include<seiscomp3/math/filter.h>

namespace Seiscomp {
namespace Math {
namespace Filtering {

template<typename TYPE>
class RunningMeanHighPass : public InPlaceFilter<TYPE>
{
    public:

	RunningMeanHighPass(double windowLength=0);
//	RunningMeanHighPass(InitialTaper const &other);
	~RunningMeanHighPass() {}

	void setLength(double windowLength) {
		_windowLength = windowLength;
	}

	// apply filter to data vector **in*place**
	void apply(int n, TYPE *inout);
	virtual InPlaceFilter<TYPE>* clone() const;

	// resets the filter, i.e. erases the filter memory
	void reset() {}

	virtual void setSamplingFrequency(double fsamp) {
		_samplingFrequency = fsamp;
		_windowLengthI = int(_windowLength * _samplingFrequency);
	}
	virtual int setParameters(int n, const double *params);

    private:
	double _windowLength,  _samplingFrequency;
	int    _windowLengthI, _sampleCount;
	double _average;
}; // class RunningMeanHighPass


} // namespace Seiscomp::Math::Filtering
} // namespace Seiscomp::Math
} // namespace Seiscomp

#endif
