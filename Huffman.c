
#include<stdio.h>
#include "./MinheapNode/MinheapNode.h"

void generateCodes(Node* root, int code[], int top) {
    if (root->left) {
        code[top] = 0;
        generateCodes(root->left, code, top + 1);
    }
    if (root->right) {
        code[top] = 1;
        generateCodes(root->right, code, top + 1);
    }
    if (!root->left && !root->right) {
        printf("%c: ", root->character);
        for (int i = 0; i < top; i++) printf("%d", code[i]);
        printf("\n");
    }
}

Node* buildHuffmanTree(char characters[], int freq[], int n) {
    MinHeapNode* heap = createMinHeap(n);
    for (int i = 0; i < n; i++) 
        insertMinHeap(heap, createNode(characters[i], freq[i]));
    while (heap->size > 1) {
        Node* left = extractMin(heap);
        Node* right = extractMin(heap);
        Node* parent = createNode('\0', left->frequency + right->frequency);
        parent->left = left;
        parent->right = right;
        insertMinHeap(heap, parent);
    }
    return extractMin(heap);
}

void printTree(Node* root) {
    if (root == NULL) return;
    if (root->character != '\0')
        printf("Leaf: %c, Freq: %d\n", root->character, root->frequency);
    else
        printf("Internal Node, Freq: %d\n", root->frequency);
    printTree(root->left);
    printTree(root->right);
}


void generateCodes(Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        generateCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        generateCodes(root->right, arr, top + 1);
    }
    if (!root->left && !root->right) {
        printf("%c: ", root->character);
        for (int i = 0; i < top; i++) printf("%d", arr[i]);
        printf("\n");
    }
}
