//
// Created by Bartha on 2021. 05. 12..
//

///ÉTTERMI FOGLALÁS

/*
 * ASZTAL FOGLALÁSOKAT LEHET ITT TENNI EGY NAPRA.
AZ ÉTTEREM 9.00-TÓL 22.00-IG VAN NYITVA.
EZEN INTERVALUMON LEHET ASZTALFOGLALÁSOKAT KÉSZÍTENI.
MOST MIVEL COVID VAN A ÉTTERMEKBEN NEM TARTOZKODHAT CSUPAN 15 SZEMÉLY, AZT A SZÁMOT NEM LEHET MEGHALADNI
ÉS CSAK ASZTALFOGLALÁSSAL LEHETSÉGES A FOGYASZTÁS.
MINDEN FOGLALÁS KÖZÖTT MINIMUM 1 ÓRA EL KELL TELJEN.
1 ÓRÁT LEHET MAXIMUM AZ ÉTTEREMBEN TÖLTENI, TEHÁT EZT NEM LEHET MEGHALADNI

 */

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

void beszur(root *fa, int adat) {
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


void Legkisebb(root *fa) {
        root *p= fa;
        while( p->bal!=NULL){
        p=p->bal;
        return p;
        }
}


void Legnagyobb(root *fa ) {
    root *p = fa;
    while (p->jobb != NULL) {
        p = p->jobb;
        return p;
    }
}



///ami meg hianyzik a beszuras bizonyos feltetel alapjan