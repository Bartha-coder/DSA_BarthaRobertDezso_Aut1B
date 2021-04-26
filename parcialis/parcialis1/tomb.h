//
// Created by Bartha on 2021. 04. 22..
//

#ifndef PARCIALIS1_TOMB_H
#define PARCIALIS1_TOMB_H

typedef struct {
     int c;
     int *array;
} A;

A *createArray(int dimension);

void readArray(const char *fileName, A **aray);

//void fillArray(A *array, int dimension, int first, int last);

float atlagokNegyzeteTomb(A *array);

void printArray(A *aray);








#endif //PARCIALIS1_TOMB_H
