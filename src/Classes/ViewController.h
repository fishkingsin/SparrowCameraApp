//
//  ViewController.h
//  Scaffold
//
//  Created by James Kong on 10/5/13.
//
//

#import <UIKit/UIKit.h>
#import "Game.h" 
@interface ViewController : SPViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) Game *_game;
- (void)takePhoto;

- (void)selectPhoto;
@end
