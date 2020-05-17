#include "XDataThread.h"

void XDataThread::Clear()
{
	mutex_.lock();
	while (!datas_.empty())
	{
		datas_.front().Drop();
		datas_.pop_front();
	}
	mutex_.unlock();
}

void XDataThread::Push(XData d)
{
	mutex_.lock();
	if (datas_.size() > maxList_)
	{
		datas_.front().Drop();
		datas_.pop_front();
	}
	datas_.push_back(d);
	mutex_.unlock();
}

XData XDataThread::Pop()
{
	mutex_.lock();
	if (datas_.empty())
	{
		mutex_.unlock();
		return XData();
	}
	XData d = datas_.front();
	datas_.pop_front();
	mutex_.unlock();
	return d;
}

bool XDataThread::Start()
{
	isExit = false;
	QThread::start();
	return true;
}

void XDataThread::Stop()
{
	isExit = true;
	wait();
}
