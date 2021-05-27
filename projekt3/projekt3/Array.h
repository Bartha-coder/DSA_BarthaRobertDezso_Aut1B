//
// Created by Bartha on 2021. 05. 27..
//

#ifndef PROJEKT3_ARRAY_H
#define PROJEKT3_ARRAY_H


#include <stdbool.h>
#include "Word.h"

typedef struct {
    int numberOfItems;
    int maxCapacity;
    Word* words;
}Array;

///egy uj tomb letrehozasa
Array* createArray(int capacity);

///felszabaditasa a tombnek
void destroyArray(Array **pArray);

///elem hozzaadasa
void addItemToArray(Word word, Array* array);

///elemek szamanak lekerese
int getNumberOfItemsFromArray(Array* array);


///elem kivevese
///ha kiveszunk egy elemet a lyukak kitomese
bool removeItemFromArray(Word itemToBeDeleted, Array* array);

///le lehet kerni egy adott elemet
Word getNthItemFromArray(int n, Array* array);

///egy adott elem keresese
bool findItemInArray(Word itemToBeFound, Array* array);

///minden elem kiiratasa
void printAllItemsOfArray(Array* array);













#endif //PROJEKT3_ARRAY_H
