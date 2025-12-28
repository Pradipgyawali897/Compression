#ifndef NODE_SERVICES_H
#define NODE_SERVICES_H

#include "struct.h"

Node *alloc_node(void);
Node *create_node(char c, unsigned int freq);
void swap_nodes(Node **a, Node **b);
#endif
