
#import <UIKit/UIKit.h>
#import "LDZFTemplateCellData.h"
@class LDZFTemplateCell;

@protocol LDZFTemplateCellDelegate <NSObject>

@optional

/**
 *  LDZFTemplateCell's event.
 *
 *  @param cell  LDZFTemplateCell type class.
 *  @param event Event data.
 */
- (void)LDZFTemplateCell:(LDZFTemplateCell *)cell event:(id)event;

@end
@interface LDZFTemplateCell : UITableViewCell
#pragma mark - Propeties.

/**
 *  LDZFTemplateCell's delegate.
 */
@property (nonatomic, weak) id <LDZFTemplateCellDelegate> delegate;

/**
 *  LDZFTemplateCell's dataAdapter.
 */
@property (nonatomic, strong) LDZFTemplateCellData *dataAdapter;

/**
 *  LDZFTemplateCell's data.
 */
@property (nonatomic, strong) id data;

/**
 *  LDZFTemplateCell's indexPath.
 */
@property (nonatomic, strong) NSIndexPath *indexPath;

/**
 *  TableView.
 */
@property (nonatomic, weak) UITableView *tableView;

/**
 *  Controller.
 */
@property (nonatomic, weak) UIViewController *controller;

/**
 *  Cell is showed or not, you can set this property in UITableView's method 'tableView:willDisplayCell:forRowAtIndexPath:' & 'tableView:didEndDisplayingCell:forRowAtIndexPath:' at runtime.
 */
@property (nonatomic) BOOL display;

#pragma mark - Method you should overwrite.

/**
 *  Setup cell, overwrite by subclass.
 */
- (void)setupCell;

/**
 *  Build subview, overwrite by subclass.
 */
- (void)buildSubview;

/**
 *  Load content, overwrite by subclass.
 */
- (void)loadContent;

/**
 *  Calculate the cell's height from data, overwrite by subclass.
 *
 *  @param data Data.
 *
 *  @return Cell's height.
 */
+ (CGFloat)cellHeightWithData:(id)data;

#pragma mark - Useful method.

/**
 *  Update the cell's height with animated or not, before you use this method, you should have the weak reference 'tableView' and 'dataAdapter', and this method will update the weak reference dataAdapter's property cellHeight.
 *
 *  @param height   The new cell height.
 *  @param animated Animated or not.
 */
- (void)updateWithNewCellHeight:(CGFloat)height animated:(BOOL)animated;

/**
 *  Selected event, you should use this method in 'tableView:didSelectRowAtIndexPath:' to make it effective.
 */
- (void)selectedEvent;

/**
 *  Used for delegate event.
 */
- (void)delegateEvent;

/**
 *  Register to tableView with the reuseIdentifier you specified.
 *
 *  @param tableView       TableView.
 *  @param reuseIdentifier The cell reuseIdentifier.
 */
+ (void)registerToTableView:(UITableView *)tableView reuseIdentifier:(NSString *)reuseIdentifier;

/**
 *  Register to tableView with the The class name.
 *
 *  @param tableView       TableView.
 */
+ (void)registerToTableView:(UITableView *)tableView;
@end

