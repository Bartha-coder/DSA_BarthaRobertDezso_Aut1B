//
// Created by Bartha on 2021. 04. 29..
//


#include <string.h>
#include "function.h"


root *create(char a[20]) {
    root *ag;
    ag =(root *)(malloc(sizeof(root)));
    if(!ag){
        printf("SIKERTELEN LEFOGLALAS!");
        return 0;
    }
    strcpy(ag->adat,a);//ket karakterlanc megfeleltetese egymasnak
    ag->jobb = NULL;
    ag->bal = NULL;
    return ag;
}

void insert(root **fa, char a[20]) {

    if((*fa) == NULL){
        (*fa) = create(a);
    }
    else{
        if(strcmp((*fa)->adat,a) > 0)
        {
            ///ide kerul egy feltetel(pl hogyha a betuvel kezdodik)
            insert(&((*fa)->bal),a);
        }
        else
            {
            ///ide kerul egy feltetel(pl hogyha a betuvel kezdodik)
            insert(&((*fa)->jobb),a);

        }
    }
}

void inorder(root *fa) {

    if(fa->bal)
        inorder(fa->bal);
    printf("%3s  ",fa->adat);
    if(fa->jobb)
        inorder(fa->jobb);
}


void preorder(root *fa)
{
    printf("%3s ", fa->adat);
    if(fa->bal)
        preorder(fa->bal);
    if(fa->jobb)
        preorder(fa->jobb);
}

void postorder(root *fa)
{
    if(fa->bal)
        postorder(fa->bal);
    if(fa->jobb)
        postorder(fa->jobb);
    printf("%3s ", fa->adat);
}

