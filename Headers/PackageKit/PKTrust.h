//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface PKTrust : NSObject
{
    struct __SecTrust *_trustRef;	// 8 = 0x8
    struct OpaqueSecPolicyRef *_policyRef;	// 16 = 0x10
    unsigned int _trustResult;	// 24 = 0x18
    int _trustLevel;	// 28 = 0x1c
    NSDate *_signingDate;	// 32 = 0x20
    BOOL _signingDateIsTrusted;	// 40 = 0x28
    BOOL _appleRootMode;	// 41 = 0x29
    BOOL _allowExpiredCertificates;	// 42 = 0x2a
    BOOL _allowExpiredRoots;	// 43 = 0x2b
}

+ (id)stringForTrustLevel:(int)arg1;	// IMP=0x000000000002bb5b
- (void)setAllowExpiredRoots:(BOOL)arg1;	// IMP=0x000000000002c49d
- (void)setAllowExpiredCertificates:(BOOL)arg1;	// IMP=0x000000000002c48d
- (BOOL)_isTrustedAsRootCertificate:(struct OpaqueSecCertificateRef *)arg1 inDomain:(unsigned int)arg2;	// IMP=0x000000000002c21c
- (struct OpaqueSecCertificateRef *)_anchorCertificateFromEvaluation;	// IMP=0x000000000002c13e
- (BOOL)_evaluateTrustAtLevel:(int)arg1 isDevelopmentSigned:(char *)arg2;	// IMP=0x000000000002becf
- (BOOL)_setCurrentPolicyWithOID:(struct cssm_data)arg1;	// IMP=0x000000000002bdff
- (BOOL)_restoreCurrentDateMode;	// IMP=0x000000000002bdc0
- (BOOL)_enterDateSignedMode;	// IMP=0x000000000002bd8e
- (BOOL)_restoreSystemTrustMode;	// IMP=0x000000000002bd71
- (void)_enterAppleRootMode;	// IMP=0x000000000002bc8c
- (id)certificateChain;	// IMP=0x000000000002bac2
- (BOOL)evaluateTrustReturningError:(id *)arg1;	// IMP=0x000000000002b739
- (int)trustLevel;	// IMP=0x000000000002b729
- (unsigned int)trustResult;	// IMP=0x000000000002b719
- (struct __SecTrust *)trustRef;	// IMP=0x000000000002b708
- (void)dealloc;	// IMP=0x000000000002b677
- (id)initWithSecTrust:(struct __SecTrust *)arg1 usingAppleRoot:(BOOL)arg2 signatureDate:(id)arg3;	// IMP=0x000000000002b5b8
- (id)initWithCertificates:(id)arg1 usingAppleRoot:(BOOL)arg2 signatureDate:(id)arg3;	// IMP=0x000000000002b500

@end
