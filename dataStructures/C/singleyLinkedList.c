#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* CreateNode()
{
    return ((Node*)malloc(sizeof(Node)));
}

int main()
{
    Node* n1 = CreateNode();
    return 0;
}
