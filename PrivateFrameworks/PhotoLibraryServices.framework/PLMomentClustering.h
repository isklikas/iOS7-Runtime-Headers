/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLMomentNodeCache, NSArray, CLGeocoder, NSSet, NSMutableDictionary;

@interface PLMomentClustering : NSObject  {
    BOOL _dirty;
    BOOL _accumulatesSmallClusters;
    BOOL _spatialJoinsAdjacentClusters;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    NSArray *_clusters;
    NSSet *_insertedClusters;
    NSSet *_updatedClusters;
    NSSet *_deletedClusters;
    unsigned int _accumulationSize;
    unsigned int __minimumNumberOfNodes;
    unsigned int __numberOfVisitedNodes;
    unsigned int __totalNumberOfNodes;
    PLMomentNodeCache *__nodeCache;
    CLGeocoder *__geocoder;
    NSMutableDictionary *__markedNodesByObjectID;
    NSMutableDictionary *__clustersByObjectID;
    NSMutableDictionary *__clustersByNodeObjectID;
    double _sigma;
    double _theta;
    double _accumulationTimeInterval;
    double _accumulationJoinThreshold;
    double _accumulationRejectionThreshold;
    double _accumulationRejectionTimeInterval;
    double _spatialJoinTimeInterval;
    double _spatialJoinThreshold;
}

@property(copy) id progressBlock;
@property(copy) NSArray * clusters;
@property(copy) NSSet * insertedClusters;
@property(copy) NSSet * updatedClusters;
@property(copy) NSSet * deletedClusters;
@property double sigma;
@property double theta;
@property(getter=isDirty,setter=_setDirty:) BOOL dirty;
@property BOOL accumulatesSmallClusters;
@property unsigned int accumulationSize;
@property double accumulationTimeInterval;
@property double accumulationJoinThreshold;
@property double accumulationRejectionThreshold;
@property double accumulationRejectionTimeInterval;
@property BOOL spatialJoinsAdjacentClusters;
@property double spatialJoinTimeInterval;
@property double spatialJoinThreshold;
@property(setter=_setMinimumNumberOfNodes:) unsigned int _minimumNumberOfNodes;
@property(setter=_setNumberOfVisitedNodes:) unsigned int _numberOfVisitedNodes;
@property(setter=_setTotalNumberOfNodes:) unsigned int _totalNumberOfNodes;
@property(readonly) PLMomentNodeCache * _nodeCache;
@property(readonly) CLGeocoder * _geocoder;
@property(readonly) BOOL hasMarkedNodes;
@property(readonly) NSMutableDictionary * _markedNodesByObjectID;
@property(readonly) NSMutableDictionary * _clustersByObjectID;
@property(readonly) NSMutableDictionary * _clustersByNodeObjectID;

+ (double)maximumClusterTime;

- (id)_geocoder;
- (void)_setMinimumNumberOfNodes:(unsigned int)arg1;
- (void)setSpatialJoinThreshold:(double)arg1;
- (void)setSpatialJoinTimeInterval:(double)arg1;
- (void)setSpatialJoinsAdjacentClusters:(BOOL)arg1;
- (void)setAccumulationRejectionTimeInterval:(double)arg1;
- (void)setAccumulationRejectionThreshold:(double)arg1;
- (void)setAccumulationJoinThreshold:(double)arg1;
- (void)setAccumulationTimeInterval:(double)arg1;
- (void)setAccumulationSize:(unsigned int)arg1;
- (void)setAccumulatesSmallClusters:(BOOL)arg1;
- (id)deletedClusters;
- (id)updatedClusters;
- (id)insertedClusters;
- (void)markNodeForDiagnosis:(id)arg1;
- (void)generateClustersForAssets:(id)arg1 withCompletionBlock:(id)arg2;
- (id)generateClustersForAssets:(id)arg1;
- (void)setTheta:(double)arg1;
- (void)setSigma:(double)arg1;
- (id)initWithManagedMoments:(id)arg1;
- (double)spatialJoinThreshold;
- (double)spatialJoinTimeInterval;
- (BOOL)spatialJoinsAdjacentClusters;
- (double)accumulationRejectionThreshold;
- (double)accumulationRejectionTimeInterval;
- (double)accumulationJoinThreshold;
- (unsigned int)accumulationSize;
- (double)accumulationTimeInterval;
- (BOOL)accumulatesSmallClusters;
- (id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2;
- (unsigned int)_totalNumberOfNodes;
- (unsigned int)_numberOfVisitedNodes;
- (id)neighborsOfNode:(id)arg1;
- (unsigned int)_minimumNumberOfNodes;
- (void)_setClusters:(id)arg1;
- (void)_setDeletedClusters:(id)arg1;
- (void)_setUpdatedClusters:(id)arg1;
- (void)_setInsertedClusters:(id)arg1;
- (id)_markedNodesByObjectID;
- (id)accumulateSmallClustersFromClusters:(id)arg1;
- (id)spatialJoinClustersFromClusters:(id)arg1;
- (id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3;
- (double)theta;
- (double)sigma;
- (id)_clustersByNodeObjectID;
- (id)_clustersByObjectID;
- (id)_nodeCache;
- (void)_setTotalNumberOfNodes:(unsigned int)arg1;
- (void)_setNumberOfVisitedNodes:(unsigned int)arg1;
- (BOOL)hasMarkedNodes;
- (void)_setDirty:(BOOL)arg1;
- (void)_commonPLMomentClusteringManagerInitialization;
- (id)clusters;
- (BOOL)isDirty;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (id)init;
- (void)dealloc;

@end
