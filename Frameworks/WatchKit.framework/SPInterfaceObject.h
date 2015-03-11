/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSString;

@interface SPInterfaceObject : NSObject {
    NSString *_interfaceProperty;
    NSString *_propertyIndex;
    int _rowIndex;
    int _tableIndex;
    NSString *_viewControllerID;
}

@property(copy) NSString * interfaceProperty;
@property(copy) NSString * propertyIndex;
@property int rowIndex;
@property int tableIndex;
@property(copy) NSString * viewControllerID;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(int)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_sendValueChanged:(id)arg1;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)init;
- (id)interfaceProperty;
- (id)propertyIndex;
- (int)rowIndex;
- (void)setInterfaceProperty:(id)arg1;
- (void)setPropertyIndex:(id)arg1;
- (void)setRowIndex:(int)arg1;
- (void)setTableIndex:(int)arg1;
- (void)setViewControllerID:(id)arg1;
- (int)tableIndex;
- (id)viewControllerID;

@end
