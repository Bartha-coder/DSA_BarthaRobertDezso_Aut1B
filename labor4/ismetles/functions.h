//
// Created by Bartha on 2021. 03. 11..
//

#ifndef ISMETLES_FUNCTIONS_H
#define ISMETLES_FUNCTIONS_H

int *array;

//helyfoglalas
int * createArray (int *aaray, int dimension);

//tomb tartalmanak beolvasasa allomanybol
void readArray (const char *filename, int *array, int dimension);

// tomb tartalmanak kiiratasa a kepernyore
void printArray(int * array, int dimension);



#endif //ISMETLES_FUNCTIONS_H
