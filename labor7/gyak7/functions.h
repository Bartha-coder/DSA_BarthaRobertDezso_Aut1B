//
// Created by Bartha on 2021. 04. 01..
//

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef GYAK7_FUNCTIONS_H
#define GYAK7_FUNCTIONS_H

typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;
NodeType* create();
bool isEmpty(struct NodeType *first);
void insert(struct NodeType **first,struct NodeType **last, int a);
void print(struct NodeType *first);
void osszead(struct NodeType *first);
void insert_before(struct  NodeType **first,struct  NodeType **last,int a);
#endif //GYAK7_FUNCTIONS_H
