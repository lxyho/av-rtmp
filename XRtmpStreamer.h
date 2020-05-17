#pragma once

#include <QtCore/QString>

class XRtmpStreamer
{
public:
	XRtmpStreamer() = default;

	void Stream();

private:
	bool m_bIsStream = false;
	QString m_strUrl = "";
};