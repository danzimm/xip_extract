//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PKPayloadCopier : NSObject
{
    void *_bomCopier;	// 8 = 0x8
    void *_bomSys;	// 16 = 0x10
    NSMutableDictionary *_bomCopierOptions;	// 24 = 0x18
    NSString *_sourcePath;	// 32 = 0x20
    unsigned long long _offset;	// 40 = 0x28
    NSString *_destinationPath;	// 48 = 0x30
    BOOL _isDestinationArchive;	// 56 = 0x38
    unsigned long long _payloadFormat;	// 64 = 0x40
    unsigned long long _payloadSize;	// 72 = 0x48
    NSArray *_maskPaths;	// 80 = 0x50
    NSArray *_allowPaths;	// 88 = 0x58
    CDUnknownBlockType _itemWillCopyHandler;	// 96 = 0x60
    CDUnknownBlockType _itemCopiedHandler;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_itemCopiedQueue;	// 112 = 0x70
    unsigned long long _fullCompleteBytes;	// 120 = 0x78
    unsigned long long _fullCompleteCount;	// 128 = 0x80
    long long _partialFileLength;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_updateQueue;	// 144 = 0x90
    BOOL _isExecuting;	// 152 = 0x98
    BOOL _didCancel;	// 153 = 0x99
    NSError *_error;	// 160 = 0xa0
}

+ (unsigned long long)payloadFormatForName:(id)arg1;	// IMP=0x000000000006736e
+ (id)_defaultBomCopierOptionsForArchiving;	// IMP=0x000000000006625b
+ (id)_defaultBomCopierOptionsForExtraction;	// IMP=0x00000000000661b6
+ (id)_defaultBomCopierOptions;	// IMP=0x00000000000660eb
- (void)run;	// IMP=0x00000000000695c4
- (id)_startLZMABlockCompressorAndSignalWhenDone:(id)arg1;	// IMP=0x0000000000068a1a
- (void)cancel;	// IMP=0x0000000000067b33
- (void)_setError:(id)arg1;	// IMP=0x0000000000067a0b
- (id)error;	// IMP=0x0000000000067842
- (unsigned long long)itemsComplete;	// IMP=0x0000000000067701
- (unsigned long long)writtenBytesComplete;	// IMP=0x00000000000675b5
- (BOOL)isExecuting;	// IMP=0x00000000000675a4
- (void)_extractMain:(id)arg1;	// IMP=0x000000000006753e
- (void)start;	// IMP=0x0000000000067429
- (void)setPayloadSize:(unsigned long long)arg1;	// IMP=0x0000000000067418
- (void)setPayloadFormat:(unsigned long long)arg1;	// IMP=0x000000000006735d
- (void)setItemWillCopyHandlerWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000067316
- (void)setItemCopiedHandlerOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006729d
- (void)setCopiesQuarantine:(BOOL)arg1;	// IMP=0x0000000000067151
- (void)setPreservesACLs:(BOOL)arg1;	// IMP=0x000000000006710a
- (void)setPreservesExtAttrs:(BOOL)arg1;	// IMP=0x00000000000670c3
- (void)setCopiesOwnershipFromIndexBom:(BOOL)arg1;	// IMP=0x0000000000066fd8
- (void)setPreservesSourceParentName:(BOOL)arg1;	// IMP=0x0000000000066eed
- (void)setHFSPlusCompressionEnabled:(BOOL)arg1 withBackwardsIncompatibleFormat:(BOOL)arg2;	// IMP=0x0000000000066c9c
- (void)setIndexBomPath:(id)arg1;	// IMP=0x0000000000066c5e
- (void)setAllowPaths:(id)arg1;	// IMP=0x0000000000066c12
- (void)setMaskPaths:(id)arg1;	// IMP=0x0000000000066bc6
- (void)dealloc;	// IMP=0x0000000000066a96
- (id)initWithRootPath:(id)arg1 destinationArchive:(id)arg2;	// IMP=0x0000000000066a06
- (id)initWithRootPath:(id)arg1 destination:(id)arg2;	// IMP=0x00000000000669a1
- (id)initWithArchivePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3;	// IMP=0x00000000000668aa
- (id)_initWithSourcePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3;	// IMP=0x0000000000066745
- (BOOL)_hasLZMABlockCompressedCPIOArchiveWithError:(id *)arg1;	// IMP=0x00000000000662db

@end
