#pragma once

class XData
{
public:
	XData() = default;
	XData(char* data, int size, long long p = 0);
	virtual ~XData() = default;

	void Drop();

	char* data_ = 0;
	int size_ = 0;
	long long pts_;
};

long long GetCurTime();