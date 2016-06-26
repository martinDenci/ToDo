//
//  ViewController.h
//  ToDoList
//
//  Created by Martin Denci on 26/06/16.
//  Copyright © 2016 Martin Denci. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)newTaskButton:(UIBarButtonItem *)sender;

@end

