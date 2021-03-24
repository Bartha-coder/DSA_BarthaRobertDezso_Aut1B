//
// Created by Bartha on 2021. 03. 24..
//

#ifndef ISMETLES_1_FUNCTIONS_H
#define ISMETLES_1_FUNCTIONS_H



int *array;

//helyfoglalas
//Balint, Becze Balazs
int * createArray(int *array, int dimension);

//tömb tartalmának beolvasása állományból
//Zalan, Balazs
void readArray(const char *fileName, int **array, int *dimension);


//tömb tartalmának kiiratása a képernyőre
//Robert, Tamas
void printArray(int *array, int dimension);


//egy adott elem keresése lineáris
//a függvény pozíciót térítsen vissza, ha nincs benne az keresett elem, akkor -1 et
//Eduard, Arnold
int findElement(int *array, int dimension, int element);

#endif //ISMETLES_1_FUNCTIONS_H