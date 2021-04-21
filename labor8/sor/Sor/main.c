#include <stdio.h>
#include <malloc.h>
#include "Sor.h"

int main() {
    Queue *myQueue;
    int capacity;
    char* nev=(char*)malloc(20* sizeof(char));
    freopen("nevek.txt","r",stdin);
        ///teszteles
    scanf("%i",&capacity);
    printf("%i",capacity);
    myQueue = Create( capacity);
    for (int i = 0; i < capacity; ++i) {
        scanf("%s",nev);
        printf("%s\n",nev);
        Put(&myQueue,nev);
    }
    /*for (int i = 0; i <capacity ; ++i) {
        printf("%s ",Get(myQueue));
    }
    IsFull(&myQueue);
    Put(&myQueue,0);
    Put(&myQueue,1);
    Put(&myQueue,2);
    Put(&myQueue,3);*//*
    printf("%i",myQueue->items[myQueue->front]);
    Front_element( myQueue);
    printf("%i ",Get(myQueue));
    printf("%i ",Get(myQueue));
    printf("%i ",Get(myQueue));
    printf("%i ",Get(myQueue));*/
    return 0;
}
