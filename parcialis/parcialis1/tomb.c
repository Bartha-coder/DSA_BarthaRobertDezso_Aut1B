//
// Created by Bartha on 2021. 04. 22..
//

#include <stdio.h>
#include <malloc.h>
#include "tomb.h"
#include <time.h>

///Ez a függvény lefoglal egy A adatstruktúrának helyet a memóriában

A *createArray(int dimension) {
    ///lefoglalja a helyet
    A *tmp = (A *) malloc(sizeof(dimension));

    ///hibaellenorzes,hogy sikeres volt-e a helyfoglalas
    if (!tmp) {
        printf("Could not allocate memory!");
        return NULL;
    }

    ///tmp-nek ertekadasa
    tmp->c = dimension;
    tmp->array = (int *) malloc(dimension * sizeof(int));

    ///hibaellenorzes
    if (!tmp->array) {
        printf("Could not allocate array!");

        ///memoriafelszabaditas
        free(tmp);
        return NULL;
    }

    return tmp;
}


///Ez a függvény beolvas egy tomböt egy fájlból

void readArray(const char *fileName, A **aray) {
    ///fajl megnyitas
    FILE *fin = fopen(fileName, "rt");

    ///hibakezeles
    if (!fin) {
        printf("Could not open file! (%s)", fileName);
        return;
    }
    ///valtozo
    int n;
    fscanf(fin, "%i", &n);

    A *buffer = createArray(n);

    if (!buffer) {
        printf("Could not allocate buffer!");
        fclose(fin);
        free(fin);
        free(buffer);
        return;
    }
    ///feltolti elemmekkel a tomobot
    for (int i = 0; i < buffer->c; i++)
        fscanf(fin, "%i", &buffer->array[i]);

    *aray = buffer;
    ///befezi az olvasast
    fclose(fin);
}

///random szamokkal tolti fel a tombot
/*void fillArray(A *array, int dimension, int first, int last) {
    srand(time(NULL));

    for (int i = 0; i < dimension; i++)
        array->array[i] = (rand() % last + 1) + first;
}
*/
 ///Ez a függvény kiírja a tömböt a standard outputra vagyis a kepernyore minden masodik elemet

void printArray(A *aray) {
    printf("Tomb: ");
    for (int i = 0; i < aray->c; i=i+2)
        printf("%i ", aray->array[i]);
    printf("\n");
}


 /// Visszatéríti a sor minden masodik elem atlagat

float atlagokNegyzeteTomb(A* aray) {
    float atlag = 0;

    for(int i = 0; i < aray->c; i=i+2)
        atlag += aray->array[i];

    return atlag;
}
