//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFNavigationBar.h>

@class BrowserToolbar, UnifiedField;

@interface NavigationBar : _SFNavigationBar
{
}

- (id)newTextField;
@property(readonly, nonatomic) UnifiedField *textField;
@property(readonly, nonatomic) BrowserToolbar *toolbar;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (double)placeholderHorizontalInset;
- (id)toolbarPlacedOnTop;
- (double)URLFieldHorizontalMargin;
- (void)updateToobarTintColor;
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;

@end
