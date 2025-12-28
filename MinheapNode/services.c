#include "services.h"
#include <stdlib.h>

MinHeapNode *alloc_minheap_node(void)
{
    return (MinHeapNode *)malloc(
        sizeof(MinHeapNode));
}

MinHeapNode *create_minheap_node(int capacity)
{
    MinHeapNode *temp = alloc_minheap_node();
    if (!temp)
        return NULL;
    temp->capacity = capacity;
    temp->size = 0;
    temp->array = (Node **)malloc(capacity * sizeof(Node *));
    return temp;
}

void Create_MinHeap(MinHeapNode *minHeap, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size &&
        minHeap->array[left]->frequency < minHeap->array[smallest]->frequency)
        smallest = left;

    if (right < minHeap->size &&
        minHeap->array[right]->frequency < minHeap->array[smallest]->frequency)
        smallest = right;

    if (smallest != idx)
    {
        swap_nodes(&minHeap->array[smallest], &minHeap->array[idx]);
        Create_MinHeap(minHeap, smallest);
    }
}
Node *extractMin(MinHeapNode *heap)
{
    Node *temp = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    Create_MinHeap(heap, 0);
    return temp;
}
