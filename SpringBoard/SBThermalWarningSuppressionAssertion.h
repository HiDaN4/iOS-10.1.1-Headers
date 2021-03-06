//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source, SBThermalWarningSuppressionAssertionDelegate;

@interface SBThermalWarningSuppressionAssertion : NSObject
{
    id <SBThermalWarningSuppressionAssertionDelegate> _delegate;
    NSString *_reason;
    unsigned int _clientPort;
    NSObject<OS_dispatch_source> *_source;
}

@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) __weak id <SBThermalWarningSuppressionAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithClientPort:(unsigned int)arg1 reason:(id)arg2;

@end

