//
// Created by Bartha on 2021. 04. 01..
//

#include "functions.h"


NodeType *create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
    newNode->next = NULL;
    return newNode;
}


void insert(struct NodeType **first,struct NodeType **last, int a){
    NodeType *newNode;
    newNode=create();
    newNode->info=a;
    if (isEmpty(*first))
    {*first=newNode;
        *last=newNode;
    }
    else
    {//beszurjuk a vegere
        (*last)->next=newNode;
        *last=newNode;
    }

}


bool isEmpty(struct NodeType *first)
{
    if(first == NULL)
        return true;
    else return false;
}

void print(struct NodeType *first) {
       struct NodeType *p=first;
       while(p!=NULL)
       {
           printf("%i  ",p->info);
           p=p->next;//elore lepek egyet
       }
}

void  osszead(struct NodeType *first) {
    int a=0;
    struct NodeType *p=first;
    while(p!=NULL)
    {a+p->info;
    p=p->next;

    }
    printf("%i",a);
}

void insert_before(struct NodeType **first, struct NodeType **last, int a) {
    struct NodeType *uj;
    uj=create();
    uj->info=a;
    uj->next=*first;
    *first=uj;

}


