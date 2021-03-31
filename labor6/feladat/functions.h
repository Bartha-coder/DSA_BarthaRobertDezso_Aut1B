//
// Created by Bartha on 2021. 03. 31..
//

#ifndef FELADAT_FUNCTIONS_H
#define FELADAT_FUNCTIONS_H

typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;

NodeType* create();

void push(NodeType** topPtr, int data);
int top(NodeType*topPtr);
int pop(NodeType**topPtr);
int isEmpty(NodeType *topPtr);



#endif //FELADAT_FUNCTIONS_H
