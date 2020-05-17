#pragma once

#include "XData.h"

#include <QtCore/QThread>
#include <QtCore/QMutex>

#include <list>

class XDataThread : public QThread
{
public:
	XDataThread() = default;

	~XDataThread() = default;

	virtual void Push(XData d);

	virtual XData Pop();

	virtual bool Start();

	virtual void Stop();

	virtual void Clear();

protected:
	int maxList_ = 100;

	int dataCount_ = 0;

	std::list<XData> datas_;

	QMutex mutex_;

	bool isExit = false;
};