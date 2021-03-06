/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {
    struct { 
        unsigned int tappedItemIndex : 1; 
    }  _has;
    GEOMapsServerMetadata * _serverMetadata;
    int  _tappedItemIndex;
}

@property (nonatomic, readonly) BOOL hasServerMetadata;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) int tappedItemIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasServerMetadata;
- (BOOL)hasTappedItemIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setHasTappedItemIndex:(BOOL)arg1;
- (void)setServerMetadata:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
