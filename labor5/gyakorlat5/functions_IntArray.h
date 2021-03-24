//
// Created by Bartha on 2021. 03. 24..
//

#ifndef AUTB_INTARRAY_FUNCTIONS_INTARRAY_H
#define AUTB_INTARRAY_FUNCTIONS_INTARRAY_H
typedef struct {
    int size;
    int *elements;
}IntArray;
//helyfoglalas
IntArray *create(int dimension);

//beolvasas
void readArray(const char *filename,IntArray **array);

//kiiratas
void printArray(IntArray *array);
#endif //AUTB_INTARRAY_FUNCTIONS_INTARRAY_H