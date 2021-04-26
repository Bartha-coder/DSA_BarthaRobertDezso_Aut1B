//
// Created by Bartha on 2021. 04. 22..
//

#ifndef PARCIALIS2_DINAMIKUS_SOR_H
#define PARCIALIS2_DINAMIKUS_SOR_H

/// Tomb

typedef struct {
    int c;
    int *num;
} F;

F *createF();

F *readArrayFromFileF(char *fileName);

void printF(F *array);

/// Sor

typedef struct N_Type {
    int e;
    struct N_Type *k;
} N_Type;

N_Type *createQueue();

void readFromFileQueue(char *fileName, N_Type *front, N_Type *last);

void insertQueue(N_Type **front, N_Type **last, int data);

void printQueue(struct N_Type *k,FILE *OUT1,FILE *OUT2);

#endif //PARCIALIS2_DINAMIKUS_SOR_H
