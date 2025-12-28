#ifndef NODE_STRUCT_H
#define NODE_STRUCT_H

typedef struct Node {
    char character;
    unsigned int frequency;
    struct Node *left;
    struct Node *right;
} Node;

#endif
