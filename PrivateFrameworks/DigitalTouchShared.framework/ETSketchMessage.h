/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETSketchMessage : ETMessage {
    NSMutableArray * _colorsInMessage;
    BOOL  _didDrawPoints;
    BOOL  _didEndWisping;
    BOOL  _hasMultipleColors;
    BOOL  _hideComet;
    NSMutableArray * _strokes;
}

@property (nonatomic, readonly) NSArray *colorsInMessage;
@property (nonatomic) BOOL didDrawPoints;
@property (nonatomic) BOOL didEndWisping;
@property (nonatomic) BOOL hasMultipleColors;
@property (nonatomic) BOOL hideComet;
@property (nonatomic, readonly) unsigned int numberOfColors;
@property (nonatomic, readonly) NSArray *strokes;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (BOOL)_decodeWithDoodle:(id)arg1;
- (void)addSketchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addSketchPoint:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (void)addStrokeWithColor:(id)arg1;
- (id)archiveData;
- (id)colorsInMessage;
- (void)convertToSimulatedPlaybackSpeed;
- (BOOL)didDrawPoints;
- (void)didEndWisp;
- (BOOL)didEndWisping;
- (void)didReachRendererLimit;
- (BOOL)hasMultipleColors;
- (BOOL)hideComet;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (unsigned int)numberOfColors;
- (void)setDidDrawPoints:(BOOL)arg1;
- (void)setDidEndWisping:(BOOL)arg1;
- (void)setHasMultipleColors:(BOOL)arg1;
- (void)setHideComet:(BOOL)arg1;
- (void)setParentMessage:(id)arg1;
- (id)strokes;
- (void)willBeginWisp;

@end
