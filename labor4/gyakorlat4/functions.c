//
// Created by Bartha on 2021. 03. 24..
//

#include <stdlib.h>
#include "functions.h"
#include <stdio.h>

int *createArray(int *array, int dimension) {
    array=(int*)malloc(dimension*sizeof(int));
    if(array==NULL)
    {
        return 0 ;
    }
    return array;
}

void readArray(const char *fileName, int **array, int *dimension) {
    FILE *f=freopen(fileName, "r", stdin);
    if(!f)
    {
        printf("Hiba");
        return;
    }
    scanf("%i",&dimension);

    *array=createArray(array, &dimension);

    for(int i=0;i<dimension;i++)
    {
        scanf("%i",&(*array)[i]);
    }
    fclose(f);

}

void printArray(int *array, int dimension) {
    for(int i=0;i<dimension;++i)
    {
        printf(" %i ",array[i]);

    }
}

int findElement(int *array, int dimension, int element) {

    for(int i=0;i<dimension;i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;

}
