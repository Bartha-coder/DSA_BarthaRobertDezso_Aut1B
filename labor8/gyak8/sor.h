//
// Created by Bartha on 2021. 04. 15..
//

#ifndef GYAK8_SOR_H
#define GYAK8_SOR_H

#include <stdbool.h>
///Egy allomanyban nevek talalhatoak (egy szo) helyezzuk be oket egy sorba es irassuk ki ezeket
typedef struct {
    int maxsize;
    int front,rear;
    //int  *items;
    char **items;
}Queue;

//helyet foglal es visszateriti a lefoglalj hely cimet
Queue *Create(int capacity);

bool isEmpty(Queue *myQueue);

bool isFull(Queue *myQueue);

//void Put(Queue **myQueue,int a);
void Put(Queue **myQueue,char* a);

//int Get(Queue *myQueue);
char* Get(Queue *myQueue);

//int FrontElement(Queue *myQueue);
char* FrontElement(Queue *myQueue);

#endif //GYAK8_SOR_H
