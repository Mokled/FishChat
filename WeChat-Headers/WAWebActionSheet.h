//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, UIButton, UIScrollView, UIView;

@interface WAWebActionSheet : MMObject
{
    UIView *_backgroundView;
    UIScrollView *_containerView;
    NSMutableArray *_buttonArray;
    UIButton *_cancelButton;
    id <WAWebActionSheetDelegate> _delegate;
    double _maxHeight;
    UIView *_view;
}

@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) __weak id <WAWebActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickBtn:(id)arg1;
- (void)tapOut:(id)arg1;
- (void)setItemColor:(id)arg1 cancelColor:(id)arg2;
- (void)setItems:(id)arg1 cancelText:(id)arg2;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end
