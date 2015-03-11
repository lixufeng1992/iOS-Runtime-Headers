/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class AMSBTLEConnectionManager, NSMutableArray, NSString, UIActivityIndicatorView;

@interface CABTMIDICentralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable, PeripheralForgottenDelegate, PeripheralConnectionStateDelegate> {
    AMSBTLEConnectionManager *connectionManager;
    BOOL didCleanup;
    UIActivityIndicatorView *indicator;
    NSMutableArray *peripheralList;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)activateController:(id)arg1;
- (void)cleanup;
- (void)connectionStateChanged:(id)arg1;
- (void)deactivateController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peripheralAtIndex:(unsigned int)arg1;
- (unsigned int)peripheralCount;
- (void)peripheralForgotten:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)title;
- (void)updatePeripheralTable;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
