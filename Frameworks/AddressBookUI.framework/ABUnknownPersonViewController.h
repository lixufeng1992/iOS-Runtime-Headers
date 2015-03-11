/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, ABContactViewController, ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, NSArray, NSString, UIFont, UIImage, UIView;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyFaceTimeActions;
    BOOL _allowsOnlyPhoneActions;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    id _helper;
    id _reserved;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
}

@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsConferencing;
@property BOOL allowsContactBlocking;
@property BOOL allowsOnlyFaceTimeActions;
@property BOOL allowsOnlyPhoneActions;
@property BOOL allowsSharing;
@property(copy) NSString * alternateName;
@property(copy) NSString * attribution;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(readonly) BOOL canShareContact;
@property(retain) ABContactViewController * contactViewController;
@property(retain) UIView * customFooterView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customMessageView;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property(retain) ABUIPerson * displayedUIPerson;
@property(readonly) unsigned int hash;
@property(readonly) ABPersonViewControllerHelper * helper;
@property BOOL isLocation;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) UIView * personHeaderView;
@property BOOL savesNewContactOnSuspend;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) NSString * shareLocationURL;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) Class superclass;
@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (void)_addToExistingContacts;
- (void)_addUnmergedRecords;
- (id)_alertSheet;
- (BOOL)_allowsAutorotation;
- (void)_createNewContacts;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (id)_forwarder;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (id)_mf_initWithEmailAddress:(id)arg1;
- (id)_mf_initWithRecentGroup:(id)arg1;
- (void)_showCardViewerForIndex:(int)arg1;
- (void)_showUnmergedContactsAlert;
- (id)_unmergedAlertSheet;
- (id)_unmergedRecords;
- (void)_unselectTable;
- (id)_vCardProperties;
- (id)_vCardTable;
- (id)_vCards;
- (id)_viewControllerForCardAtIndex:(int)arg1;
- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void)accessChanged;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)actionsDelegate;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsOnlyFaceTimeActions;
- (BOOL)allowsOnlyPhoneActions;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSharing;
- (id)alternateName;
- (void)applicationDidResume;
- (id)attribution;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (BOOL)canShareContact;
- (id)contactViewController;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (id)displayedUIPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (id)initWithVCardData:(id)arg1;
- (BOOL)isLocation;
- (BOOL)isShowingMultipleVCards;
- (void)loadView;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)newActionButton;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)presentAddToContactsSheet;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentShareContactSheet;
- (void)reloadImageData;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (BOOL)savesNewContactOnSuspend;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsOnlyFaceTimeActions:(BOOL)arg1;
- (void)setAllowsOnlyPhoneActions:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setPrimaryProperty:(int)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)sharingDelegate;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (id)styleProvider;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)unknownPersonViewDelegate;
- (void)updateNavigationButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)willTweetLocationCallback;
- (id)willWeiboLocationCallback;

@end
