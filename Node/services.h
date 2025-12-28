#ifndef NODE_SERVICES_H
#define NODE_SERVICES_H

#include "struct.h"

struct Node *alloc_node(void);
struct Node *create_node(char c, unsigned int freq);
void swap_nodes(struct Node **a, struct Node **b);
#endif
