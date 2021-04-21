//
// Created by Bartha on 2021. 04. 21..
//
#include <malloc.h>
#include <stdio.h>
#include "gyak.h"

//tomb beolvasasa es helyfoglalasa
P *create(int dimension) {
    P *array;
    array = (P *) malloc(1 * sizeof(P *));
    if (!array) {
        printf("sikertelen helyfoglalas");
        return 0;
    }
    array->nr = dimension;
    array->numbers = (int *) malloc(array->nr * sizeof(int));
    return array;
}

void readArray(const char *filename, P **array) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("sikertelen allomanymegnyitas");
        return;
    }
    int n=30;
    //fscanf(f, "%i", &n);
    P *auxarray;
    auxarray = create(n);
    for (int i = 0; i < auxarray->nr; i++) {
        fscanf(f, "%i", &auxarray->numbers[i]);
    }
    *array = auxarray;
}

void printArray(P *array) {
    for(int i=0;i<array->nr;i++)
        printf("%i ",array->numbers[i]);
}

//verem letrehozasa es lefoglalasa

///Ez a függvény létrehoz egy verem struktúrát a memóriában
NType *creat() {
    NType *node = (NType *) calloc(1, sizeof(NType));

    if (!node) {
        printf("Error while allocating node!");
        return NULL;
    }
    node->k = NULL;
    return node;
}


NType *readStackFromFile(char *fileName) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba az allomany megnyitasakor!");
        return NULL;
    }

    NType *stack = creat();

    int tmp;

    while (fscanf(fin, "%i", &tmp) !=EOF) {
        push(&stack, tmp);
    }

    return stack;
}

void push(NType **stack, int n) {
    NType *newNType = creat();

    if (!newNType) {
        printf("Error while allocating new node!");
        return;
    }

    newNType->n = n;
    newNType->k = *stack;
    *stack = newNType;
}

int top(NType*topPtr)
{if(topPtr != NULL )
        return topPtr->n;
}
int pop(NType**topPtr) {
    if (topPtr != NULL) {
        NType *aux;
        int auxinfo;
        aux = *topPtr;
        *topPtr = aux->k;
        auxinfo = aux->k;
        free(aux);
        return auxinfo;
    }
}


/// Ez a függvény kiírja a képernyőre a vermet

void printStack(NType *stack) {
        if (stack == NULL)
            return;

        printf("%i ", stack->n);

        if (stack->k)
            printStack(stack->k);
    }


