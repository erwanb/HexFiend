#import <Cocoa/Cocoa.h>
#import <HexFiend/HexFiend.h>

//notification posted when our DataInspector's height changes.  Has a single key "height" which is the new height for the scroll view
extern NSString * const HFDataInspectorDidChangeRowCount;

// notification posted when all rows are deleted
extern NSString * const HFDataInspectorDidDeleteAllRows;

@interface HFDataInspectorRepresenter : HFRepresenter {
    IBOutlet NSView *outletView; //used only for loading the nib
    IBOutlet NSTableView *table; //not retained - is a subview of our view (stored in superclass)
    NSMutableArray *inspectors;
}

- (void)loadDefaultInspectors;

- (NSUInteger)rowCount;

- (IBAction)addRow:(id)sender;
- (IBAction)removeRow:(id)sender;
- (IBAction)doubleClickedTable:(id)sender;
- (void)resizeTableViewAfterChangingRowCount;

@end

@interface HFDataInspectorScrollView : NSScrollView
@end

@interface HFDataInspectorPlusMinusButtonCell : NSButtonCell
@end

@interface HFDataInspectorTableView : NSTableView
@end
