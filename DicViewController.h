//
//  DicViewController.h
//  HighSchoolEnglish
//
//  Created by Ibokan on 13-1-5.
//  Copyright (c) 2013年 Ibokan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DicViewController : UIViewController<UITextFieldDelegate>
{
    BOOL exChangeL;
    //UIBarButtonItem* back;
    UIButton* backButton;
}
@property (retain, nonatomic) IBOutlet UITextField *inputWord;
@property (retain, nonatomic) IBOutlet UITextView *translationView;

- (IBAction)searchWord:(UIButton *)sender;
@end
