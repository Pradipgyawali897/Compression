#include <stdlib.h>
#include "services.h"

Node *alloc_node(void) {
    return (Node *)malloc(sizeof(Node));
}

Node *create_node(char c, unsigned int freq) {
    Node *temp = alloc_node();
    if (!temp) return NULL; 
    temp->character = c;
    temp->frequency = freq;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


void swap_nodes(Node **a, Node **b){
    Node* temp=*a;
    *a = *b;
    *b = temp;
}
