//
// Created by Bartha on 2021. 04. 29..
//

#ifndef GYAK10_FUNCTION_H
#define GYAK10_FUNCTION_H
#include <malloc.h>
#include <stdio.h>

typedef struct root{
    char adat[20];
    struct root *bal;
    struct root *jobb;
}root;


///helyet foglal a memoriaban egy elemnek, feltolti az adat mezot
root *create(char a[20]);

///beszur a megfelelo helyre a csomopontot
void insert(root **fa, char a[20]);

///kiiras bal-gyoker-jobb
void inorder(root *fa);

///kiiras gyoker-bal-jobb
void preorder(root *fa);

///kiiras bal-jobb-gyoker
void postorder(root *fa);

#endif //GYAK10_FUNCTION_H
