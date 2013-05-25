#import <oak/misc.h>

PUBLIC NSFont* OakStatusBarFont ();
PUBLIC NSFont* OakControlFont ();

PUBLIC NSTextField* OakCreateLabel (NSString* label = @"");
PUBLIC NSTextField* OakCreateSmallLabel (NSString* label = @"");
PUBLIC NSButton* OakCreateButton (NSString* label, NSBezelStyle bezel = NSRoundedBezelStyle);
PUBLIC NSPopUpButton* OakCreatePopUpButton (BOOL pullsDown = NO, NSString* initialItemTitle = nil);
PUBLIC NSPopUpButton* OakCreateStatusBarPopUpButton (NSString* initialItemTitle = nil);
PUBLIC NSComboBox* OakCreateComboBox ();
PUBLIC NSImageView* OakCreateDividerImageView ();

PUBLIC NSBox* OakCreateViewWithColor (NSColor* color = nil, NSColor* secondaryColor = nil);
PUBLIC NSBox* OakCreateVerticalLine (NSColor* primaryColor, NSColor* secondaryColor = nil);
PUBLIC NSBox* OakCreateHorizontalLine (NSColor* primaryColor, NSColor* secondaryColor = nil);
