//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString, PKInstallRequest;

@interface PKInstallSandbox : NSObject <NSSecureCoding>
{
    NSString *_sandboxPath;	// 8 = 0x8
    PKInstallRequest *_installRequest;	// 16 = 0x10
    NSString *_scriptsPath;	// 24 = 0x18
    NSString *_temporaryPath;	// 32 = 0x20
    NSNumber *_stagedSize;	// 40 = 0x28
    NSDate *_stageDate;	// 48 = 0x30
    NSMutableDictionary *_scriptDirsByPackageSpecifier;	// 56 = 0x38
    NSMutableDictionary *_bomPathsByPackageSpecifier;	// 64 = 0x40
    NSMutableArray *_cleanupPaths;	// 72 = 0x48
    NSDictionary *_scriptsAttributes;	// 80 = 0x50
    NSDictionary *_temporaryAttributes;	// 88 = 0x58
    NSSet *_previousPackageIdentifiersSharingGroupsWithSandbox;	// 96 = 0x60
    long long _relevance;	// 104 = 0x68
}

+ (BOOL)supportsSecureCoding;	// IMP=0x0000000000012035
@property(retain) NSSet *previousPackageIdentifiersSharingGroupsWithSandbox; // @synthesize previousPackageIdentifiersSharingGroupsWithSandbox=_previousPackageIdentifiersSharingGroupsWithSandbox;
@property long long relevance; // @synthesize relevance=_relevance;
@property(retain) NSDate *stageDate; // @synthesize stageDate=_stageDate;
@property(retain) NSNumber *stagedSize; // @synthesize stagedSize=_stagedSize;
- (id)extraCleanupPaths;	// IMP=0x0000000000013727
- (id)sandboxContainedTrashcanPath;	// IMP=0x0000000000013651
- (id)trashcanPath;	// IMP=0x00000000000133ab
- (id)createSecureTemporaryDirectoryForScript;	// IMP=0x0000000000013283
- (id)secureTemporaryDirectoryPath;	// IMP=0x0000000000013236
- (BOOL)wasStaged;	// IMP=0x000000000001321e
- (id)temporaryDirectoryForScripts;	// IMP=0x000000000001320d
- (id)payloadDirectory;	// IMP=0x00000000000131e9
@property(copy) NSString *sandboxPath;
- (id)scriptsDirectoryForPackageSpecifier:(id)arg1;	// IMP=0x000000000001301a
- (BOOL)prepareForCommitReturningError:(id *)arg1;	// IMP=0x0000000000012b85
- (id)bomPathForPackageSpecifier:(id)arg1;	// IMP=0x0000000000012915
- (id)_createDirectory:(id)arg1 uniquifying:(BOOL)arg2 error:(id *)arg3;	// IMP=0x000000000001281b
@property(retain) PKInstallRequest *installRequest; // @synthesize installRequest=_installRequest;
- (id)description;	// IMP=0x000000000001272d
- (void)dealloc;	// IMP=0x00000000000125fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012456
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012040
- (id)initWithSandboxPath:(id)arg1 installRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001184f

@end
