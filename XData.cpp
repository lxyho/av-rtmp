#include "XData.h"

#include <stdlib.h>
#include <string.h>

extern "C"
{
#include "libavutil/time.h"
};

long long GetCurTime()
{
	return av_gettime();
}

void XData::Drop()
{
	if (data_)
		delete data_;
	data_ = 0;
	size_ = 0;
}

XData::XData(char* data, int size, long long p)
{
	this->data_ = new char[size];
	memcpy(this->data_, data, size);
	this->size_ = size;
	this->pts_ = p;
}