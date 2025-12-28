#ifndef MINHEAPNODE_SERVICES_H
#define MINHEAPNODE_SERVICES_H
#include "struct.h"
#include "../Node/services.h"

MinHeapNode *alloc_minheap_node(void);
MinHeapNode *create_minheap_node(int capacity);
void insert_minheap_node(MinHeapNode *minHeap, Node *minHeapNode);
void Create_MinHeap(MinHeapNode* minHeap,int idx);
Node* extractMin(MinHeapNode* heap) ;
#endif