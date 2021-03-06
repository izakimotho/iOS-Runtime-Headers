/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface _TDPackerNode : NSObject {
    _TDPackerNode *_down;
    BOOL _fit;
    void *_node;
    struct CGPoint { 
        float x; 
        float y; 
    } _origin;
    _TDPackerNode *_right;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    BOOL _used;
}

@property (retain) _TDPackerNode *down;
@property BOOL fit;
@property void*node;
@property struct CGPoint { float x1; float x2; } origin;
@property (retain) _TDPackerNode *right;
@property struct CGSize { float x1; float x2; } size;
@property BOOL used;

- (void)dealloc;
- (id)down;
- (BOOL)fit;
- (void*)node;
- (struct CGPoint { float x1; float x2; })origin;
- (id)right;
- (void)setDown:(id)arg1;
- (void)setFit:(BOOL)arg1;
- (void)setNode:(void*)arg1;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRight:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUsed:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)used;

@end
