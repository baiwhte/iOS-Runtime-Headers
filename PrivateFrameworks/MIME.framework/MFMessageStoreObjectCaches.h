/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableArray;

@interface MFMessageStoreObjectCaches : NSObject {
    NSMutableArray *bodyCache;
    NSMutableArray *bodyDataCache;
    NSMutableArray *headerCache;
    NSMutableArray *headerDataCache;
}

@property(retain) NSMutableArray * bodyCache;
@property(retain) NSMutableArray * bodyDataCache;
@property(retain) NSMutableArray * headerCache;
@property(retain) NSMutableArray * headerDataCache;

- (id)bodyCache;
- (id)bodyDataCache;
- (id)copyCacheForType:(unsigned int)arg1;
- (void)dealloc;
- (void)flush;
- (id)headerCache;
- (id)headerDataCache;
- (void)setBodyCache:(id)arg1;
- (void)setBodyDataCache:(id)arg1;
- (void)setCache:(id)arg1 forType:(unsigned int)arg2;
- (void)setHeaderCache:(id)arg1;
- (void)setHeaderDataCache:(id)arg1;

@end