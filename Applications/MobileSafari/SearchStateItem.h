//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CompletionList, NSDate, NSString;

@interface SearchStateItem : NSObject
{
    NSDate *_cacheDate;
    CompletionList *_completionList;
    NSString *_destinationTLD;
}

@property(copy, nonatomic) NSString *destinationTLD; // @synthesize destinationTLD=_destinationTLD;
@property(retain, nonatomic) CompletionList *completionList; // @synthesize completionList=_completionList;
@property(retain, nonatomic) NSDate *cacheDate; // @synthesize cacheDate=_cacheDate;
- (void).cxx_destruct;

@end
