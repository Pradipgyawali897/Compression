#ifndef MINHEAPNODE_SERVICES_H
#define MINHEAPNODE_SERVICES_H
#include "struct.h"
#include "../Node/services.h"

MinHeapNode *alloc_minheap_node(void);
MinHeapNode *create_minheap_node(int capacity);
void Create_MinHeap(MinHeapNode* minHeap,int idx);
Node* extractMin(MinHeapNode* heap) ;
#endif