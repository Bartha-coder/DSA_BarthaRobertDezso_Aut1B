//
// Created by Balint on 2021. 04. 15..
//

#ifndef SOR_SOR_H
#define SOR_SOR_H

#include <stdbool.h>

///Egy alomanyban nevek talalhatoak (egy szo) helyezuk be oket egy sorba es irasuk ki
typedef struct {
    int maxsize;
    int front,rear;
    char **items;
}Queue;
///Queue *myQueue;
Queue *Create(int capacity);///helyfoglalas
bool Isempty(Queue *myQueue);
bool IsFull(Queue *myQueue);
void Put(Queue **myQueue,char* a);
char* Get(Queue *myQueue);
char* Front_element(Queue *myQueue);
#endif //SOR_SOR_H
