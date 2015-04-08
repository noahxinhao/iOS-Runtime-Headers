/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSString, UIImage;

@interface UIKBRenderer : NSObject {
    NSString *_cacheKey;
    struct CGContext { } *_cachingContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cachingContextCompletion;

    BOOL _containsRGBContent;
    struct CGContext { } *_ctx;
    BOOL _opaque;
    int _renderFlags;
    UIImage *_renderedImage;
    float _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property(retain) NSString * cacheKey;
@property(readonly) BOOL containsRGBContent;
@property(readonly) struct CGContext { }* context;
@property(readonly) NSData * contextData;
@property(readonly) BOOL opaque;
@property(readonly) int renderFlags;
@property(readonly) UIImage * renderedImage;
@property(readonly) float scale;
@property(readonly) struct CGSize { float x1; float x2; } size;

+ (void)clearInternalCaches;
+ (struct CGContext { }*)imageContextWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 opaque:(BOOL)arg3 invert:(BOOL)arg4;
+ (id)rendererWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5;

- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (struct CGContext { }*)_contextForCacheImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPath { }*)_deleteGlyphPaths;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withStyle:(id)arg3 force1xImages:(BOOL)arg4;
- (BOOL)_drawKeyString:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (struct CGPath { }*)_thickShiftGlyphPath;
- (struct CGPath { }*)_thinShiftGlyphPath;
- (struct CGColor { }*)_validColorForColor:(struct CGColor { }*)arg1;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)addRoundRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 radius:(float)arg2 corners:(unsigned int)arg3;
- (id)cacheKey;
- (BOOL)containsRGBContent;
- (struct CGContext { }*)context;
- (id)contextData;
- (void)dealloc;
- (void)drawPath:(struct CGPath { }*)arg1 weight:(float)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 color:(struct CGColor { }*)arg4 fill:(BOOL)arg5;
- (void)drawShiftPath:(BOOL)arg1 weight:(float)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 color:(struct CGColor { }*)arg4;
- (void)ensureContext;
- (id)initWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 withScale:(float)arg3 opaque:(BOOL)arg4 renderFlags:(int)arg5;
- (BOOL)loadCachedImageForHashString:(id)arg1;
- (BOOL)opaque;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForRenderGeometry:(id)arg1;
- (id)pathForSplitGeometry:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(BOOL)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (int)renderFlags;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;
- (BOOL)renderKeyImageContents:(id)arg1 withTraits:(id)arg2;
- (BOOL)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (BOOL)renderKeyStringContents:(id)arg1 withTraits:(id)arg2;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;
- (id)renderedImage;
- (float)scale;
- (void)setCacheKey:(id)arg1;
- (struct CGSize { float x1; float x2; })size;

@end