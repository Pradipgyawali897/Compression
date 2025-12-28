#include <stdio.h>
#include "./MinheapNode/MinheapNode.h"

void generateCodes(Node *root, int code[], int top)
{
    if (root->left)
    {
        code[top] = 0;
        generateCodes(root->left, code, top + 1);
    }
    if (root->right)
    {
        code[top] = 1;
        generateCodes(root->right, code, top + 1);
    }
    if (!root->left && !root->right)
    {
        printf("%c: ", root->character);
        for (int i = 0; i < top; i++)
            printf("%d", code[i]);
        printf("\n");
    }
}

Node *buildHuffmanTree(char characters[], int freq[], int n)
{
    MinHeapNode *heap = create_minheap_node(n);
    for (int i = 0; i < n; i++)
        insert_minheap_node(heap, create_node(characters[i], freq[i]));

    while (heap->size > 1)
    {
        Node *left = extractMin(heap);
        Node *right = extractMin(heap);
        Node *parent = create_node('\0', left->frequency + right->frequency);
        parent->left = left;
        parent->right = right;
        insert_minheap_node(heap, parent);
    }
    return extractMin(heap);
}

void printTree(Node *root)
{
    if (root == NULL)
        return;
    if (root->character != '\0')
        printf("Leaf: %c, Freq: %d\n", root->character, root->frequency);
    else
        printf("Internal Node, Freq: %d\n", root->frequency);
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 56, 14, 32, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node *root = buildHuffmanTree(arr, freq, size);

    int arr_codes[100];
    int top = 0;

    printf("Huffman Codes:\n");
    generateCodes(root, arr_codes, top);
    printTree(root);

    return 0;
}
