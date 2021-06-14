//
// Created by Bartha on 2021. 06. 13..
//

#include <malloc.h>
#include <stdio.h>
#include "hasito.h"


//hasito tabla
void beszur(int k, int *T, int m) // k kulcsu elemet beszur
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T[j]==-1)
        {
            T[j]=k;
            return;
        }
        else i++;
    }
    while (i!=m);
    printf( "tulcsodulas");
    return;
}

int *create(int m){
    int * t =(int*)malloc(m*sizeof(int));
    for(int i=0;i<m;++i){
        ///ha -1 akkor van hely,tehat ures
        t[i]=-1;///minden pozicio ures
    }
   ///teszteles
    return t;
}

void print(int *t,int m){
    for(int i=0;i<m;++i){
        printf("%i",t[i]);

    }
}

int keres(int k, int *T, int m) //k kulcsu elemet keres
{
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (T[j]==k)
            return j; // visszaadja a megtalalt elem indexet
        else i++;
    }
    while ((T[j]!=-1) && (i!=m));
    return -1; // ha nincs benne a keresett elem
}
