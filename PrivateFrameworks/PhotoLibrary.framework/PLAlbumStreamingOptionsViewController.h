/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UISwitch, <PLAlbumStreamingOptionsViewControllerDelegate>, UITableView, PLCloudSharedAlbum, PLComposeRecipientViewController, UIBarButtonItem, UITextField, NSString, UIPopoverController, NSArray;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLSubscriberViewControllerDelegate, PLAlbumChangeObserver, UIActionSheetDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIPopoverControllerDelegate> {
    PLCloudSharedAlbum *_album;
    NSArray *_albumAssets;
    NSString *_albumName;
    int _optionsMode;
    <PLAlbumStreamingOptionsViewControllerDelegate> *_delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UITextField *_albumNameTextField;
    UISwitch *_wantsPublicWebsiteSwitch;
    BOOL _changingValueFromControl;
    BOOL _adjustedInsetsForKeyboard;
    BOOL _streamOwner;
    unsigned int _addSubscribersRow;
    unsigned int _showingPublicWebsiteActivityIndicator : 1;
    unsigned int _showingShareLinkOption : 1;
    int _publicURLTransitionMode;
    UIPopoverController *_shareLinkPopoverController;
    BOOL _isPresentedModally;
    NSArray *_visibleInvitationRecords;
    NSString *_visiblePublicURL;
}

@property(retain) NSArray * albumAssets;
@property(retain) PLCloudSharedAlbum * album;
@property <PLAlbumStreamingOptionsViewControllerDelegate> * delegate;
@property BOOL isPresentedModally;
@property(copy) NSString * albumName;
@property BOOL streamOwner;


- (void)_cancelAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setAlbum:(id)arg1;
- (id)album;
- (void)albumDidChange:(id)arg1;
- (id)albumName;
- (id)initForAlbumCreationOperationWithAssets:(id)arg1;
- (void)subscriberViewController:(id)arg1 didDeleteSubscriber:(id)arg2;
- (void)composeRecipientViewControllerReturnKeyPressed:(id)arg1;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)_deletePhotoStream;
- (void)_displayActivitySheet;
- (void)_setShowingPublicURLActivitySpinner:(BOOL)arg1;
- (BOOL)_shouldShowPublicURLActivitySpinner;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_changeAlbumName:(id)arg1;
- (id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1;
- (void)_displayDeleteConfirmation:(id)arg1;
- (BOOL)streamOwner;
- (void)_editAlbumIfNecessaryWithCompletionHandler:(id)arg1;
- (void)_createNewCloudSharedAlbum;
- (void)_handleCompletionWithReason:(int)arg1;
- (BOOL)isPresentedModally;
- (void)_updatePublicURLStateIfNecessary;
- (void)_updatePublicURLTransitionMode;
- (BOOL)_publicURLEnabled;
- (void)_updateAllControls;
- (id)_optionsTableViewFooter;
- (BOOL)_albumNameIsValid;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAlbumNameField;
- (void)_updateNavButtons;
- (id)_initWithOptionsMode:(int)arg1 withAlbum:(id)arg2 andAssets:(id)arg3;
- (void)setStreamOwner:(BOOL)arg1;
- (void)setAlbumName:(id)arg1;
- (id)initForEditOpertationForAlbum:(id)arg1;
- (id)albumAssets;
- (void)setIsPresentedModally:(BOOL)arg1;
- (void)setAlbumAssets:(id)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_doneAction:(id)arg1;

@end