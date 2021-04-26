//
// Created by Bartha on 2021. 04. 22..
//

#include <malloc.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#include "dinamikus sor.h"


 /// Ez a függvény lefoglal egy F adatstruktúrának helyet a memóriában

F *createF(int capacity) {
    /// Lefoglalja a helyet
    F *newF = (F *) calloc(capacity, sizeof(F));

    /// Hibaellenorzés
    if (!newF) {
        printf("Hiba a memoriaallokacio kozben!");
        return NULL;
    }

    /// newF mezoonek értékadása
    newF->c = capacity;
    newF->num = (int *) calloc(capacity, sizeof(int));

    /// Hibaellenorzés
    if (!newF->num) {
        printf("Hiba a memoriaallokacio kozben!");

        /// Memóriafelszabadítás
        free(newF);
        newF = NULL;

        return NULL;
    }

    return newF;
}




 /// Ez a függvény beolvas egy tomböt egy fájlból

F* readArrayFromFileF(char* fileName) {
    /// Megnyissa a fájlt
    FILE *fin = fopen(fileName, "rt");

    /// Hibakezelés
    if (!fin) {
        printf("Hiba az allomany megnyitasakor!");
        return NULL;
    }

    /// Ideiglenes változó adott mérettel
    F *newF = createF(5);

    int i = 0;

    /// Feltölti a tömböt, fájl végéig olvas
    while (fscanf(fin, "%i", &(newF->num[i])) != EOF) {
        i++;
    }

    /// Visszatéríti a tömböt
    return newF;
}

///Ez a függvény létrehoz egy várakozási sort a memóriában

N_Type* createQueue() {
    /// Lefoglalja a helyet
    N_Type* node = (N_Type*)calloc(1, sizeof(N_Type));

    /// Hibaellenorzés
    if(!node) {
        printf("Error while allocating node!");
        return NULL;
    }

    /// Mezok inicializálása
    node->e = INT_MIN;
    node->k = NULL;

    /// Visszatéríti a sort
    return node;
}

////Megmondja, hogy üres-e egy sor vagy nem

bool isEmptyQueue(N_Type* front) {
    return front == NULL;
}


/// Beszúr egy sorba egy elemet

void insertQueue(N_Type** front, N_Type** last, int data) {
    /// Átmeneti node
    N_Type* node = createQueue();

    /// Hibakezelés
    if(!node) {
        printf("Failed to create node while inserting data!");
        return;
    }

    node->e = data;

    /// Ha üres akkor a front és a last pointer ugyan arra mutat
    if(isEmptyQueue(*front))
        *front = *last = node;
    else {
        /// Különben az utolsó mutat az átmeneti node-ra és felveszi a "k" mezoje a címét
        (*last)->k = (struct N_Type *) node;
        (*last) = node;
    }
}


///Ez a függvény beolvas egy sort egy fájlból.


void readFromFileQueue(char* fileName, N_Type* front, N_Type* last) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba az allomany megnyitasakor!");
        return;
    }

    int tmp;

    while(fscanf(fin, "%i", &tmp) != EOF) {
        insertQueue(tmp, &front, &last);
    }

}

///kiiratni az elemek 2 fajlba ha paratlan az out1.txt-be es paros out2.txt-be

void printQueue(struct  N_Type *k,FILE *OUT1,FILE *OUT2){

    if(*k->c%2){
        fprintf(OUT1,"%i",*k->c);
    }
    else{
        fprintf(OUT2,"%i",*k->c);
    }
    printQueue((N_Type *)k->next,OUT1,OUT2));
}




