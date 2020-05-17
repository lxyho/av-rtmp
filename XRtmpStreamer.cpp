#include "XRtmpStreamer.h"


#include <iostream>

void XRtmpStreamer::Stream()
{
	std::cout << "stream" << std::endl;
	if (m_bIsStream)
	{
		m_bIsStream = false;
	}
	else
	{
		m_bIsStream = true;
		bool ok = false;
		if (!ok)
		{
		}
		else
		{
		}
	}
}