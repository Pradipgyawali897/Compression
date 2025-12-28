#ifndef MINHEAPNODE_STRUCT_H
#define MINHEAPNODE_STRUCT_H

#include "../Node/Node.h"

typedef struct MinHeapNode{
    int size;
    int capacity;
    struct Node **array;
} MinHeapNode;

#endif