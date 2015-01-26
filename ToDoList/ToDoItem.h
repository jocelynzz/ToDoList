//
//  ToDoItem.h
//  ToDoList
//
//  Created by Jocelyn on 1/21/15.
//  Copyright (c) 2015 Jocelyn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
