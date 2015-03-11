/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSHashTable, NSMutableArray, NSString;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {
    NSMutableArray *_activeUpdaters;
    NSMutableArray *_inactiveUpdaters;
    BOOL _postingRemoteUpdateNotification;
    NSHashTable *_updateObservers;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id)arg2;
- (void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(BOOL)arg3 forceUpdate:(BOOL)arg4 completion:(id)arg5;
- (void)_stocksDidReload;
- (void)_updateStocksBasic:(id)arg1 forced:(BOOL)arg2 withCompletion:(id)arg3;
- (void)_updaterDidCancelOrFinish:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (id)availableStockUpdater;
- (void)cancel;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (BOOL)hadError;
- (id)init;
- (BOOL)isLoading;
- (void)removeUpdateObserver:(id)arg1;
- (void)reset;
- (void)resetUpdaters;
- (void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4;
- (void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(BOOL)arg3;
- (void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3;
- (void)stocksDidUpdateRemotely;
- (void)updateAllStocksBasic;
- (void)updateAllStocksBasicWithCompletion:(id)arg1;
- (void)updateStaleStocksBasicWithCompletion:(id)arg1;
- (void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(id)arg2;
- (void)updateStockComprehensive:(id)arg1 forced:(BOOL)arg2 withCompletion:(id)arg3;
- (void)updateStockComprehensive:(id)arg1 withCompletion:(id)arg2;
- (void)updateStockComprehensive:(id)arg1;
- (void)updateStocksComprehensive:(id)arg1;

@end
