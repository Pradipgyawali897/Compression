
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





