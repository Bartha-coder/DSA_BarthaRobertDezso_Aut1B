//
// Created by Bartha on 2021. 03. 31..
//

#ifndef FELADAT2_FUNCTIONS_H
#define FELADAT2_FUNCTIONS_H

typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;

NodeType* create();

struct NodeType* create();
void push(NodeType** topPtr, int data);

#endif //FELADAT2_FUNCTIONS_H
