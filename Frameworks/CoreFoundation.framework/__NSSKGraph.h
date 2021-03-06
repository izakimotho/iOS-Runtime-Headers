/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSKGraph : NSObject {
    unsigned int _currE;
    unsigned int _dump;
    struct edge { unsigned int x1; unsigned int x2[2]; unsigned int x3; } *_edges;
    unsigned int _l_end;
    unsigned int _numE;
    unsigned int _numV;
    struct vertex { unsigned int x1; unsigned int x2; unsigned int *x3; } *_vertices;
}

- (BOOL)addEdgeWithH1:(unsigned int)arg1 withH2:(unsigned int)arg2;
- (void)dealloc;
- (void)finalize;
- (id)initWithNumberOfVertices:(int)arg1 numberOfEdges:(int)arg2;
- (struct edge {}**)isAcyclic;
- (BOOL)isEmpty;
- (unsigned int)numOfEdges;

@end
