//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAlertItem, SBAlertItemsController;

@protocol SBAlertItemsControllerObserver <NSObject>
- (void)alertItemsController:(SBAlertItemsController *)arg1 didDeactivateAlertItem:(SBAlertItem *)arg2 forReason:(int)arg3;
- (void)alertItemsController:(SBAlertItemsController *)arg1 didActivateAlertItem:(SBAlertItem *)arg2;
- (void)alertItemsController:(SBAlertItemsController *)arg1 willActivateAlertItem:(SBAlertItem *)arg2;
@end
