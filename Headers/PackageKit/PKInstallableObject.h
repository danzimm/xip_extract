//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, PKArchive, PKPackage, PKProduct;

@interface PKInstallableObject : NSObject
{
    NSURL *_url;	// 8 = 0x8
    PKArchive *_archive;	// 16 = 0x10
    NSArray *_cachedCertificates;	// 24 = 0x18
    PKProduct *_product;	// 32 = 0x20
    PKPackage *_package;	// 40 = 0x28
    NSArray *_cachedReferences;	// 48 = 0x30
    NSArray *_cachedBomDatas;	// 56 = 0x38
}

@property(readonly, retain) NSURL *URL; // @synthesize URL=_url;
@property(readonly, retain) NSArray *bomsAsData;
@property(readonly, retain) NSArray *referencedObjects;
- (id)_packageURLsUnderChoice:(id)arg1 internal:(BOOL)arg2;	// IMP=0x000000000007ca65
@property(readonly, retain) NSArray *certificates;
@property(readonly) BOOL isSigned;
- (id)description;	// IMP=0x000000000007c8cb
- (void)dealloc;	// IMP=0x000000000007c811
- (id)initWithURL:(id)arg1;	// IMP=0x000000000007c400

@end

