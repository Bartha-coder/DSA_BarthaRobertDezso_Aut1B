//
// Created by Bartha on 2021. 06. 14..
//

#include <malloc.h>
#include <stdio.h>
#include "gyak1.h"

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
int top(NodeType*topPtr)
{if(!topPtr)///ha nem üres
        return topPtr->info;
}
int pop(NodeType**topPtr) {
    if (!topPtr)///ha nem üres
    {
        NodeType *aux;
        int auxinfo;
        aux = *topPtr;
        *topPtr = aux->next;
        auxinfo = aux->info;
        free(aux);
        return auxinfo;
    }
}