//
//  AddToDoItemViewController.h
//  ToDoList
//
//  Created by Jocelyn on 1/21/15.
//  Copyright (c) 2015 Jocelyn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface AddToDoItemViewController : UIViewController
    <UITextFieldDelegate>

@property ToDoItem *toDoItem;

@end
