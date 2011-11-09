/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface _PFGarbageManager : NSObject  {
    NSMutableArray *_urlsToCleanUp;
}

+ (id)defaultInstance;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)registerURLForCleanup:(id)arg1;
- (id)temporaryLinksDirectoryForStore:(id)arg1;
- (void)doCleanupForURL:(id)arg1;
- (id)_init__;
- (void)removeDirectory:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (id)retain;
- (id)autorelease;
- (void)release;

@end