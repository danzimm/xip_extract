//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPackageSource.h"

@class NSArray;

@interface PKProduct : NSObject <PKPackageSource>
{
    int _minTrustLevel;	// 8 = 0x8
    int _evaluatedTrustLevel;	// 12 = 0xc
    NSArray *_certificateChain;	// 16 = 0x10
    struct __SecTrust *_trustRef;	// 24 = 0x18
    BOOL _allowExpiredCerts;	// 32 = 0x20
    BOOL _allowExpiredRoots;	// 33 = 0x21
}

+ (BOOL)canInitWithURL:(id)arg1;	// IMP=0x00000000000430ff
+ (id)productByLoadingProductAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000043216
+ (id)_allProductClasses;	// IMP=0x000000000004316d
+ (void)_setAllowsFolderArchives:(BOOL)arg1;	// IMP=0x00000000000433e1
+ (BOOL)_allowsFolderArchives;	// IMP=0x00000000000433d4
- (id)allPackageReferences;	// IMP=0x00000000000430cc
- (id)resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2 returningUTI:(id *)arg3;	// IMP=0x0000000000043087
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000043054
- (id)stringsDictionary;	// IMP=0x0000000000043021
- (id)distributionContainer;	// IMP=0x0000000000042fee
- (id)distribution;	// IMP=0x0000000000042fbb
- (void)setAllowExpiredRoots:(BOOL)arg1;	// IMP=0x0000000000042fab
- (void)setAllowExpiredCertificates:(BOOL)arg1;	// IMP=0x0000000000042f9b
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)arg1;	// IMP=0x0000000000042f4a
- (int)trustLevelReturningCertificateChain:(id *)arg1;	// IMP=0x0000000000042efb
- (BOOL)evaluateTrustReturningError:(id *)arg1;	// IMP=0x0000000000042ba1
- (void)setMinimumRequiredTrustLevel:(int)arg1;	// IMP=0x0000000000042b91
- (id)productVersion;	// IMP=0x0000000000042b89
- (id)productIdentifier;	// IMP=0x0000000000042b81
- (id)productType;	// IMP=0x0000000000042b4e
- (id)URL;	// IMP=0x0000000000042b1b
- (void)dealloc;	// IMP=0x0000000000042a9f
- (id)_archiveForTrustEvaluation;	// IMP=0x0000000000043165
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004310a
- (id)_distributionFlatData;	// IMP=0x00000000000433cc
- (id)_distributionArchivePath;	// IMP=0x00000000000433c4

@end
