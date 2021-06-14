//
// Created by Bartha on 2021. 06. 14..
//

#ifndef GYAKORLAT_VIZSGARA_GYAK1_H
#define GYAKORLAT_VIZSGARA_GYAK1_H

typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;

NodeType* create();

void push(NodeType** topPtr, int data);

int top(NodeType*topPtr);

int pop(NodeType**topPtr);

int isEmpty(NodeType *topPtr);


#endif //GYAKORLAT_VIZSGARA_GYAK1_H
