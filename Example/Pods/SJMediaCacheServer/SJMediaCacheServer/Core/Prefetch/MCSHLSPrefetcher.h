//
//  MCSHLSPrefetcher.h
//  CocoaAsyncSocket
//
//  Created by BlueDancer on 2020/6/11.
//

#import "MCSPrefetcherDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface MCSHLSPrefetcher : NSObject<MCSPrefetcher>

- (instancetype)initWithURL:(NSURL *)URL preloadSize:(NSUInteger)bytes delegate:(nullable id<MCSPrefetcherDelegate>)delegate delegateQueue:(dispatch_queue_t)delegateQueue;

@end

NS_ASSUME_NONNULL_END
