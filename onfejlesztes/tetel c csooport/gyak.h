//
// Created by Bartha on 2021. 04. 21..
//

#ifndef TETEL_C_CSOOPORT_GYAK_H
#define TETEL_C_CSOOPORT_GYAK_H

typedef struct  {
    int nr; ///SIZE
    int *numbers;///*ELEMENTS
} P;///INTARRAY

//helyfoglalas
P * create(int dimension);

//beolvasas
void readArray(const char *filename,P **array);

//kiiratas
void printArray(P *array);

/*typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;*/

typedef struct NType{
    int n;
    struct NType *k;
}NType;

NType* creat();

NType* readStackFromFile(char* fileName);

void push(NType **stack, int n);

int top(NType*topPtr);

int pop(NType**topPtr);

int isEmpty(NType *topPtr);

void printStack(NType* stack);





#endif //TETEL_C_CSOOPORT_GYAK_H
