//
// Created by Bartha on 2021. 03. 24..
//

#include <stdlib.h>
#include <stdio.h>
#include "functions_IntArray.h"

IntArray *create(int dimension) {
    IntArray *array;
    array = (IntArray *) malloc(1 * sizeof(IntArray *));
    if (!array) {
        printf("sikertelen helyfoglalas");
        return 0;
    }
    array->size = dimension;
    array->elements = (int *) malloc(array->size * sizeof(int));
    return array;
}

void readArray(const char *filename, IntArray **array) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        printf("sikertelen allomanymegnyitas");
        return;
    }
    int n;
    fscanf(f, "%i", &n);
    IntArray *auxarray;
    auxarray = create(n);
    for (int i = 0; i < auxarray->size; i++) {
        fscanf(f, "%i", &auxarray->elements[i]);
    }
    *array = auxarray;
}

void printArray(IntArray *array) {
    for(int i=0;i<array->size;i++)
        printf("%i ",array->elements[i]);
}
