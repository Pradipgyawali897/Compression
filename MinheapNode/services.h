#ifndef MINHEAPNODE_SERVICES_H
#define MINHEAPNODE_SERVICES_H
#include "struct.h"
#include "../Node/services.h"

struct MinHeapNode *alloc_minheap_node(void);
struct MinHeapNode *create_minheap_node(int capacity);
void Create_MinHeap(struct MinHeapNode* minHeap,int idx);
struct Node* extractMin(struct MinHeapNode* heap) ;
#endif