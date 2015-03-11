/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKCommandHistoryDelegate>, NSMutableArray, TSKCommand<TSKPreflightCommand>;

@interface TSKCommandHistory : TSPObject {
    NSMutableArray *_commands;
    <TSKCommandHistoryDelegate> *_delegate;
    BOOL _documentEditedSinceLastSave;
    unsigned int _mark;
    NSMutableArray *_markedRedoCommands;
    TSKCommand<TSKPreflightCommand> *_pendingPreflightCommand;
    unsigned int _removedCommandCountSinceLastSave;
    unsigned int _removedCommandCountSinceUnarchive;
    unsigned int _undoCount;
    unsigned int _undoCountAtLastSave;
    unsigned int _undoCountAtUnarchive;
}

@property <TSKCommandHistoryDelegate> * delegate;
@property(retain) TSKCommand<TSKPreflightCommand> * pendingPreflightCommand;

- (void)acceptMarkedCommands;
- (void)addCommand:(id)arg1;
- (void)beginMark;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)clear;
- (void)coalesceWithCommand:(id)arg1;
- (id)commandsRemovedByAcceptingMarkedCommands;
- (id)commandsRemovedByAddingCommand;
- (void)dealloc;
- (id)delegate;
- (void)documentWasSaved;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isDocumentEditedSinceLastSave;
- (id)lastCommand;
- (void)p_endMark:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_rangeOfCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_rangeOfRedoCommands;
- (void)p_removeCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned int)arg1;
- (id)packageLocator;
- (id)pendingPreflightCommand;
- (id)popRedo;
- (id)popUndo;
- (id)redoActionString;
- (unsigned int)redoCount;
- (id)rejectMarkedCommands;
- (void)replaceLastCommandWithCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingPreflightCommand:(id)arg1;
- (id)undoActionString;
- (unsigned int)undoCount;

@end
