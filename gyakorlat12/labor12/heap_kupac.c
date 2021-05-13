//
// Created by Bartha on 2021. 05. 13..
//

#include <malloc.h>
#include "heap_kupac.h"

heap *createHeap(int max) {
    heap* h = (heap*)malloc(sizeof(heap));
    h->size = 0;
    h->maxSize = max;
    h->data = (int*)malloc(max * sizeof(int));
    return h;
}

void insert(heap* h, int Element) {
    h->size++;
    h->data[h->size] = Element;
    up(h, h->size);
}

void up(heap* h, int i) {
    int seged;
    //i--a csucspont
    //data[i/2]--apa
    //data[i]--gyerek
    //maximum szamitas
    //megyunk a csucspont fele es ha az apa kisebb mint a gyerek akkor up csere
    //minimum szamitas
    //megyunk a csucspont fele es ha az apa nagyobb mint a gyerek akkor up csere
    while ((i > 1) && (h->data[i/2] > h->data[i])) {
        seged = h->data[i/2];
        h->data[i/2] = h->data[i];
        h->data[i] = seged;
        i /= 2;
    }
}

/*
void down(heap* h, int i) {
    while (2*i <= h->size) {
        int j = 2 * i;
        if (j < h->size && h->data[j] < h->data[j+1])
            j++;
        if (h->data[j] <= h->data[i]) break;
        swap(&h->data[i], &h->data[j]);
        i = j;
    }
}



int torolmax(heap *h) {
    int seged = h->data[1];
    h->data[1] = h->data[h->size];
    h->data[h->size] = seged;
    h->size--;
    return seged;
}


void kupacrendez(heap *h, int N) {
    for (int i = N / 2; i >= 1; i--)
    {
        down(h, i);
    }
    for (int i = 1; i < N; i++)
    {
        torolmax(h);
        down(h, 1);
    }
}
*/


