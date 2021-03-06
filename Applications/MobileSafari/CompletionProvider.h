//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CompletionProviderDelegate;

@interface CompletionProvider : NSObject
{
    NSMutableDictionary *_completionsByString;
    NSMutableArray *_completedStringsInPruneOrder;
    _Bool _failing;
    _Bool _inCompletionsForString;
    id <CompletionProviderDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isFailing) _Bool failing; // @synthesize failing=_failing;
@property(nonatomic) __weak id <CompletionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)maximumCachedCompletionCount;
- (void)fail;
- (void)setCompletions:(id)arg1 forString:(id)arg2;
- (void)clearCachedCompletions;
- (void)_pruneCachedCompletions;
- (void)setStringToComplete:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (id)completionsForString:(id)arg1;
- (id)init;

@end

