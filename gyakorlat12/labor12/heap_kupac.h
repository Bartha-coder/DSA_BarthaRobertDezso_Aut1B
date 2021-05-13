//
// Created by Bartha on 2021. 05. 13..
//

#ifndef LABOR12_HEAP_KUPAC_H
#define LABOR12_HEAP_KUPAC_H

typedef struct heap{
    int *data;
    int size;
    int maxSize;
}heap;

///heap=kupac helyet foglal a memoriaban egy elemnek
heap *createHeap(int max);


///beszur a megfelelo helyre a csomopontot
void insert(heap* h,int Element);


///kupac tulajdonsag mindig az apa nagyobb, mint a gyerekek ha a gyerek nagyobb akkor csere felfele
void up(heap* h, int i);

///kupac tulajdonsafg , minimum szamitas
void minim(heap* h, int i);

///kupac tulajdonsag mindig az apa nagyobb, mint a gyerekek ha a gyerek
void down(heap* h, int i);


///
int torolmax(heap *h);


///
void kupacrendez(heap* h, int N);




#endif //LABOR12_HEAP_KUPAC_H
