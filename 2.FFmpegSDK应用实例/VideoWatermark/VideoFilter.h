#ifndef _VIDEO_FILTER_H_
#define _VIDEO_FILTER_H_

int Init_video_filters(const AVCodecContext *pCodecCtx);

void AVFrame_filter_callback(AVFrame *frame);

void Close_video_filters();

#endif