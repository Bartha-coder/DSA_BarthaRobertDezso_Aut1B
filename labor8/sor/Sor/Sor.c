//
// Created by Balint on 2021. 04. 15..
//

#include <malloc.h>
#include "Sor.h"

Queue *Create(int capacity){
    Queue *myQueue;
    myQueue->front=-1;
    myQueue->rear=-1;
    myQueue->maxsize=capacity;
    myQueue->items=(Queue*)malloc(capacity*sizeof (Queue));
    ///teszteles
    for (int i = 0; i < capacity; ++i) {
        myQueue->items[i]=(char*)malloc(20* sizeof(char ));
    }

    return myQueue;
}
bool Isempty(Queue *myQueue){
    if (myQueue->front=-1)
    {
        return true;
    }
    else
        {
        return false;
        }
}
bool IsFull(Queue *myQueue){
    if (myQueue->rear=myQueue->maxsize-1)
    {
        return true;
    }
    else {return false;}
}
void Put(Queue **myQueue,char* a){
    if(Isempty(*myQueue)) {
        (*myQueue)->front = (*myQueue)->front + 1;
        (*myQueue)->rear = (*myQueue)->rear + 1;
        (*myQueue)->items[(*myQueue)->rear] = a;
    }

    else{
        (*myQueue)->rear=(*myQueue)->rear+1;
        (*myQueue)->items[(*myQueue)->rear]=a;
    }


}
char* Get(Queue *myQueue){
    int a=myQueue->items[myQueue->front];
    myQueue->front=myQueue->front+1;
    return a;
}
char* Front_element(Queue *myQueue){
    int a=myQueue->items[myQueue->front];
    return a;
}