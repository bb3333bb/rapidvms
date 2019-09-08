/*
 * Device.h
 *
 *  Created on: 2016年8月10日
 *      Author: xzl
 */

#ifndef DEVICE_DEVICE_H_
#define DEVICE_DEVICE_H_

#include <sys/time.h>
#include <memory>
#include <string>
#include <functional>
#include "Util/util.h"
#include "RTP/RtpMakerAAC.h"
#include "RTP/RtpMakerH264.h"
#include "Rtsp/RtspToRtmpMediaSource.h"

using namespace std;
using namespace ZL::Rtsp;
using namespace ZL::Util;

#ifdef ENABLE_FAAC
#include "Codec/AACEncoder.h"
using namespace ZL::Codec;
#endif //ENABLE_FAAC

#ifdef ENABLE_X264
#include "Codec/H264Encoder.h"
using namespace ZL::Codec;
#endif //ENABLE_X264

namespace ZL {
namespace DEV {

class VideoInfo {
public:
	int iWidth;
	int iHeight;
	float iFrameRate;
};
class AudioInfo {
public:
	int iChannel;
	int iSampleBit;
	int iSampleRate;
};

class DevChannel {
public:
	typedef std::shared_ptr<DevChannel> Ptr;
	DevChannel(const char *strApp, const char *strId,float fDuration = 0,bool bLiveStream = true);
	virtual ~DevChannel();

	void initVideo(const VideoInfo &info);
	void initAudio(const AudioInfo &info);

	void inputYUV(char *apcYuv[3], int aiYuvLen[3], uint32_t uiStamp);
	void inputPCM(char *pcData, int iDataLen, uint32_t uiStamp);

	void inputH264(char *pcData, int iDataLen, uint32_t uiStamp);
	void inputAAC(char *pcData, int iDataLen, uint32_t uiStamp);
#ifdef ENABLE_RTSP2RTMP
	int readerCount() {
		return m_mediaSrc ? m_mediaSrc->readerCount() : 0;
	}
	void updateTimeStamp(uint32_t uiStamp){
		m_mediaSrc->updateTimeStamp(uiStamp);
	}
#endif //ENABLE_RTSP2RTMP
	void setOnSeek(const function<bool(uint32_t)> &onSeek){
		m_mediaSrc->setOnSeek(onSeek);
	}
	void setOnStamp(const function<uint32_t()> &cb) {
		m_mediaSrc->setOnStamp(cb);
	}
private:
	inline void makeSDP_264(unsigned char *pucData, int iDataLen);
	inline void makeSDP_AAC(unsigned char *pucData, int iDataLen);
	inline void makeSDP(const string& strSdp);
#ifdef ENABLE_X264
	std::shared_ptr<H264Encoder> m_pH264Enc;
#endif //ENABLE_X264

#ifdef ENABLE_FAAC
	std::shared_ptr<AACEncoder> m_pAacEnc;
#endif //ENABLE_FAAC
	RtpMaker_AAC::Ptr m_pRtpMaker_aac;
	RtpMaker_H264::Ptr m_pRtpMaker_h264;
	RtspToRtmpMediaSource::Ptr m_mediaSrc;
	string m_strSDP;
	bool m_bSdp_gotH264 = false;
	bool m_bSdp_gotAAC = false;

	unsigned char m_aucSPS[256];
	unsigned int m_uiSPSLen = 0;
	unsigned char m_aucPPS[256];
	unsigned int m_uiPPSLen = 0;
	std::shared_ptr<VideoInfo> m_video;
	std::shared_ptr<AudioInfo> m_audio;
};


} /* namespace DEV */
} /* namespace ZL */

#endif /* DEVICE_DEVICE_H_ */
