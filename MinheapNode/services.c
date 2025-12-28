#include "services.h"
#include<stdlib.h>

struct MinHeapNode *alloc_minheap_node(void){
    return (struct MinHeapNode *)malloc(
        sizeof(struct MinHeapNode)
    );
}

struct MinHeapNode* create_minheap_node(int capacity){
    struct MinHeapNode* temp=alloc_minheap_node();
    if(!temp) return NULL;
    temp->capacity=capacity;
    temp->size=0;
    temp->array = malloc(capacity * sizeof(struct Node*));
    return temp;
}


void Create_MinHeap(struct MinHeapNode* minHeap, int idx){
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size &&
        minHeap->array[left]->frequency < minHeap->array[smallest]->frequency)
        smallest = left;

    if (right < minHeap->size &&
        minHeap->array[right]->frequency < minHeap->array[smallest]->frequency)
        smallest = right;

    if (smallest != idx) {
        swap_nodes(&minHeap->array[smallest], &minHeap->array[idx]);
        Create_MinHeap(minHeap, smallest);
    }
}
