//
// Created by Bartha on 2021. 05. 12..
//

#ifndef PROJECT_BINARIS_H
#define PROJECT_BINARIS_H
#include <stdio.h>
#include <malloc.h>

typedef struct root{
    int adat;
    struct root *bal;
    struct root *jobb;
}root;


///helyet foglal a memoriaban egy elemnek, feltolti az adat mezot
root *create(int a);

///beszur a megfelelo helyre a csomopontot
void insert(root **fa, int a);

///kiiras bal-gyoker-jobb
void inorder(root *fa);

///kiiras gyoker-bal-jobb
void preorder(root *fa);

///kiiras bal-jobb-gyoker
void postorder(root *fa);

///ezzel lehet keresni bizonyos elemre a faban
root *keres(root *fa, int adat);

///beszuras es egyebek
root  *beszur(root *gyoker, int adat);

///meghataroza hany eleme van a fanak
int elemszam(root *fa);

///legkisebb elem meghatarozasa
root *Legkisebb(root *fa)

///legnagyobb elem meghatarozasa
root *Legnagyobb(root *fa )

#endif //PROJECT_BINARIS_H
