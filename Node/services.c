#include <stdlib.h>
#include "services.h"

struct Node *alloc_node(void) {
    return (struct Node *)malloc(sizeof(struct Node));
}

struct Node *create_node(char c, unsigned int freq) {
    struct Node *temp = alloc_node();
    if (!temp) return NULL; 
    temp->character = c;
    temp->frequency = freq;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


void swap_nodes(struct Node **a, struct Node **b){
    struct Node* temp=*a;
    *a = *b;
    *b = temp;
}
