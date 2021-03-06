/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFixedSizePage : NSObject {
    <MTLBuffer> *_buffer;
    unsigned int _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property (nonatomic, readonly) <MTLBuffer> *buffer;

- (unsigned int)_allocateElement;
- (id)buffer;
- (void)dealloc;
- (void)deallocateElementAtOffset:(unsigned int)arg1;
- (BOOL)hasFreeElementsLeft;
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned int)arg2;
- (BOOL)isFull;
- (id)newSubBuffer;

@end
