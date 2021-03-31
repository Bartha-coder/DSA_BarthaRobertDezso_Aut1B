//
// Created by Bartha on 2021. 03. 31..
//

#include <malloc.h>

typedef struct NodeType NodeType;

NodeType *create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
    newNode->next = NULL;
    return newNode;
}

void push(NodeType **topPtr, int data) {
    NodeType *newNode = create();
    newNode->info = data;
    newNode->next = *topPtr;
    *topPtr=newNode;
}
#include "functions.h"
