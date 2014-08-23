/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDelayedValidator, DVTStackBacktrace, NSDictionary, NSHashTable, NSMapTable, NSSet;

@interface IDENavigableItemCoordinator : NSObject <DVTInvalidation>
{
    NSHashTable *_coordinatedItems;
    NSMapTable *_documentsByNavItem;
    NSMapTable *_domainIdentifiersByNavItem;
    NSMapTable *_rootItemsByRepresentedObject;
    NSMapTable *_changeCountByNavItem;
    NSDictionary *_filteringProxiesByKey;
    DVTDelayedValidator *_delayedValidator;
    NSSet *_pendingGraphChangedItems;
    NSSet *_pendingPropertyChangedItems;
    DVTStackBacktrace *_creationBacktrace;
    DVTStackBacktrace *_invalidationBacktrace;
    id <IDENavigableItemCoordinatorDelegate> _delegate;
    struct __navigableItemCoordinatorFlags {
        unsigned int _delegateRespondsToDocumentForNavigableItem:1;
        unsigned int _hasWarnedAboutRootItemsCount:1;
        unsigned int _reservedNavigableItemCoordinator:30;
    } _navigableItemCoordinatorFlags;
    BOOL _isValid;
}

+ (void)initialize;
+ (id)navigableItemFilteringPerformanceMetric;
- (id)_childNavigableItemWithRepresentationIDs:(id)arg1 parentItem:(id)arg2 acceptPartialMatch:(BOOL)arg3;
- (void)_collectDescendants:(id)arg1 toForgetForItem:(id)arg2;
- (id)_coordinatedItems;
- (id)_documentContentNavigableItemFromArchivableRepresentation:(id)arg1 documentItem:(id)arg2;
- (id)_domainIdentifiersByNavItem;
- (void)_editorDocumentWillClose:(id)arg1;
- (id)_filteringProxiesByKey;
- (void)_incrementChangeCountForItem:(id)arg1;
- (id)_navigableItemForFilePath:(id)arg1 inWorkspace:(id)arg2 withSeenFileReferences:(id)arg3 allowLeaf:(BOOL)arg4;
- (id)_navigableItemFromArchivableRepresentation:(id)arg1 rootItem:(id)arg2 error:(id *)arg3;
- (void)_noteNavigableItem:(id)arg1 valueWillChangeForProperty:(id)arg2;
- (void)_noteNavigableItemChangedChildItems:(id)arg1;
- (void)_postNotificationNamed:(id)arg1 forChangedItems:(id)arg2;
- (id)_providersByDomain;
- (id)_rootItemsByRepresentedObject;
- (unsigned long long)changeCountForItem:(id)arg1;
- (void)closeDocumentsForItems:(id)arg1;
- (void)delayedPostGraphAndPropertyChangeNotifications:(id)arg1;
@property id <IDENavigableItemCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)domainIdentifierForNavigableItem:(id)arg1;
- (Class)domainProviderWithIdentifier:(id)arg1;
- (id)editorDocumentForNavigableItem:(id)arg1;
- (id)filteredItemProxyForItems:(id)arg1;
- (id)filteredItemProxyForKey:(id)arg1;
- (void)forgetEditorDocument:(id)arg1;
- (void)forgetItems:(id)arg1;
- (void)forgetNavigableItem:(id)arg1;
- (void)forgetNavigableItems:(id)arg1;
- (void)hibernate;
- (id)init;
- (void)invalidate;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(readonly, getter=isValid) BOOL valid;
- (id)navigableItemFromArchivableRepresentation:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3;
- (void)postDidForgetNotificationForItems:(id)arg1;
- (void)processPendingChanges;
- (void)registerNavigableItem:(id)arg1;
- (id)rootNavigableItemInDomain:(id)arg1 forWorkspace:(id)arg2;
- (id)rootNavigableItemWithRepresentedObject:(id)arg1;
- (void)setFilteredItemProxy:(id)arg1 forKey:(id)arg2;
- (id)structureNavigableItemForDocumentURL:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
- (void)unhibernate;

@end
