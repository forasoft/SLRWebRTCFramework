/*
 *  Copyright 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import "SLRRTCMacros.h"
#import "SLRRTCMediaStreamTrack.h"

NS_ASSUME_NONNULL_BEGIN

@class SLRRTCAudioSource;

RTC_OBJC_EXPORT
@interface SLRRTCAudioTrack : SLRRTCMediaStreamTrack

- (instancetype)init NS_UNAVAILABLE;

/** The audio source for this audio track. */
@property(nonatomic, readonly) SLRRTCAudioSource *source;

@end

NS_ASSUME_NONNULL_END