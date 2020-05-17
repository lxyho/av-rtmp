#pragma once

#include "XDataThread.h"

#include <string>

class XController : public XDataThread
{
public:
	static XController* Get()
	{
		static XController xc;
		return &xc;
	}

	virtual bool Set(std::string key, double val);

	virtual bool Start();

	virtual void Stop();

	void run();

	virtual ~XController() = default;

	std::string outUrl_;

	std::string inUrl_;

	std::string err_;

	int camIndex_ = -1;
	
protected:
	int vindex_ = 0;
	int aindex_ = 1;

	XController() = default;
};