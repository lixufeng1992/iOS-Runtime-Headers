/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <CalSearchDataSink>;

@interface CalSearch : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
     /* Encoded args for previous method: @20@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=l[40c]}B}8^{CalFilter=}12@16 */
    <CalSearchDataSink> *_dataSink;
    } _dataSourceDeallocLock;
    struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x20; struct _opaque_pthread_mutex_t { long x_21_1_1; BOOL x_21_1_2[40]; } x21; boolx22; } *_database;
    struct CalFilter { } *_filter;
    struct __CFSet { } *_matchedEventsSet;
    struct __CFSet { } *_matchedLocationsSet;
    struct __CFSet { } *_matchedParticipantsSet;
    struct __CFArray { } *_partialCachedDays;
    struct __CFArray { } *_partialCachedDaysIndexes;
    struct __CFArray { } *_partialCachedOccurrences;
    struct __CFArray { } *_partialResults;
    BOOL _searchAttendees;
    BOOL _searchLocations;
    BOOL _searchParticipants;
    struct __CFString { } *_searchString;
    int _seed;
    bool_dateToStartShowingResultsSentToDataSink;
    bool_implementsCancellationCallback;
    bool_moreResultsAvailable;
    bool_stopLoadingResults;
}

@property BOOL searchAttendees;
@property BOOL searchLocations;
@property BOOL searchParticipants;

- (struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool*x5; bool*x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; boolx16; struct __CFString {} *x17; double x18; boolx19; double x20; }*)_createSearchContext;
- (void)_addMatchedEventIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray { }*)arg1;
- (struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool*x4; bool*x5; struct CalDatabase {} *x6; }*)_createEventIdsSearchContext;
- (struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)_createLocationIdsSearchContext;
- (struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)_createParticipantIdsSearchContext;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool*x4; bool*x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool*x5; bool*x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; boolx16; struct __CFString {} *x17; double x18; boolx19; double x20; }*)arg1;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool*x5; bool*x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; boolx16; struct __CFString {} *x17; double x18; boolx19; double x20; }*)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool*x4; bool*x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool*x4; bool*x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool*x3; bool*x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_startLoadingResults;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; int x18; id x19; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x20; struct _opaque_pthread_mutex_t { long x_21_1_1; BOOL x_21_1_2[40]; } x21; boolx22; }*)arg1 filter:(struct CalFilter { }*)arg2 dataSink:(id)arg3;
- (bool)moreResultsAvailable;
- (BOOL)searchAttendees;
- (BOOL)searchLocations;
- (BOOL)searchParticipants;
- (int)seed;
- (void)setSearchAttendees:(BOOL)arg1;
- (void)setSearchLocations:(BOOL)arg1;
- (void)setSearchParticipants:(BOOL)arg1;
- (void)startSearching;
- (void)stopSearching;

@end
