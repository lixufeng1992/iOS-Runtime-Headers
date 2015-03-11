/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKEventAttendeePickerDelegate>, EKEvent, MFComposeRecipientTextView, MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSDate, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, UIKeyboard, UIScrollView, UITableView;

@interface EKEventAttendeePicker : UIViewController <UITableViewDataSource, UITableViewDelegate, MFContactsSearchConsumer, MFComposeRecipientTextViewDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _ABAccessDenied;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSOperationQueue *_availabilityQueue;
    MFComposeRecipientTextView *_composeRecipientView;
    <EKEventAttendeePickerDelegate> *_emailValidationDelegate;
    EKEvent *_event;
    } _initialFrame;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    NSDate *_overriddenEventEndDate;
    NSDate *_overriddenEventStartDate;
    NSMutableDictionary *_recipientAddressesToRecipients;
    UIScrollView *_recipientScrollView;
    NSArray *_recipients;
    NSString *_searchAccountID;
    MFContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    MFContactsSearchResultsModel *_searchResultsModel;
    UITableView *_searchResultsView;
    MFSearchShadowView *_shadowView;
    BOOL _shouldReenableAutomaticKeyboard;
    BOOL _showingSearchField;
    BOOL _suppressAvailabilityRequests;
}

@property(readonly) NSArray * addresses;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property <EKEventAttendeePickerDelegate> * emailValidationDelegate;
@property(readonly) unsigned int hash;
@property(copy) NSArray * recipients;
@property(readonly) NSString * remainingText;
@property(copy) NSString * searchAccountID;
@property(readonly) BOOL showAvailability;
@property(readonly) Class superclass;

+ (id)_addressForRecipient:(id)arg1;
+ (BOOL)_participantHasResponded:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustLayoutOfSubviews;
- (void)_copyRecipientsFromComposeView;
- (void)_hideSearchResultsAndCancelOutstandingSearches:(BOOL)arg1;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (float)_maxScrollerHeight;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (id)_searchManager;
- (id)_searchResultsView;
- (void)_setAtomPresentationOption:(unsigned int)arg1 forRecipient:(id)arg2;
- (void)_setRecipientsOnComposeView;
- (id)_shadowView;
- (void)_showSearchResults;
- (id)addresses;
- (void)beganNetworkActivity;
- (void)commitRemainingText;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)emailValidationDelegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (id)peoplePickerPrompt;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (unsigned int)presentationOptionsForRecipient:(id)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (id)remainingText;
- (id)searchAccountID;
- (void)searchWithText:(id)arg1;
- (void)setEmailValidationDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)showAvailability;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
