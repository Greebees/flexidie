//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 19 2016 14:33:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WACallViewController;

@protocol WACallViewControllerDelegate <NSObject>
- (void)callViewController:(WACallViewController *)arg1 didRequestToShowChatWithJID:(NSString *)arg2 presentKeyboard:(_Bool)arg3;
- (UIView *)callViewControllerNeedsUpdatedSnapshot:(WACallViewController *)arg1;
- (void)callViewControllerWillResignActive:(WACallViewController *)arg1;
- (void)callViewControllerDidFinish:(WACallViewController *)arg1;
- (void)callViewControllerWillFinish:(WACallViewController *)arg1;
@end
