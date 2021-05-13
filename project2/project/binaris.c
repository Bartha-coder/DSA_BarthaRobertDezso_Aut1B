//
// Created by Bartha on 2021. 05. 12..
//


#include <stdbool.h>

#include "binaris.h"

root *create(int a) {
    root *ag;
    ag =(root *)(malloc(sizeof(root)));
    if(!ag){
        printf("SIKERTELEN LEFOGLALAS!");
        return 0;
    }
    ag->adat = a;
    ag->jobb = NULL;
    ag->bal = NULL;
    return ag;
}

void insert(root **fa, int a) {

    if((*fa) == NULL){
        (*fa) = create(a);
    }
    else{
        if((*fa)->adat>a)
        {
            insert(&((*fa)->bal),a);
        }
        else insert(&((*fa)->jobb),a);
    }
}

void inorder(root *fa) {

    if(fa->bal)
        inorder(fa->bal);
    printf("%3d",fa->adat);
    if(fa->jobb)
        inorder(fa->jobb);
}


void preorder(root *fa)
{
    printf("%3d ", fa->adat);
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
    printf("%3d ", fa->adat);
}

root  *beszur(root *fa, int adat) {
    if (fa == NULL) {                        /* üres? */
        root *uj = (root*) malloc(sizeof(root));
        uj->bal = uj->jobb = NULL;
        uj->adat = adat;
        return uj;
    }

    if (adat < fa->adat)                /* kisebb? */
        fa->bal = beszur(fa->bal, adat);
    else if (adat > fa->adat)                /* nagyobb? */
        fa->jobb = beszur(fa->jobb, adat);
    else
        ; /* benne van */
    return fa;
}

root *keres(root *fa, int adat) {
    root *mozgo = fa;
    while (mozgo != NULL && mozgo->adat != adat) {
        if (adat < mozgo->adat) mozgo = mozgo->bal;
        else mozgo = mozgo->jobb;
    }
    return mozgo;
}

int elemszam(root *fa) {
    if (fa == NULL) return 0;
    return elemszam(fa->bal)+ elemszam(fa->jobb)+ 1;
}


root *Legkisebb(root *fa) {
        root *p= fa;
        while( p->bal!=NULL){
        p=p->bal;
        return p;
        }
}


root *Legnagyobb(root *fa ) {
    root *p = fa;
    while (p->jobb != NULL) {
        p = p->jobb;
        return p;
    }
}



///ami meg hianyzik a beszuras bizonyos feltetel alapjan