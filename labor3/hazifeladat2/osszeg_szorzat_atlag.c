//
// Created by Bartha on 2021. 03. 10..
//

#include <stdio.h>
#include "osszeg_szorzat_atlag.h"


void osszeg(int n,int a[n])
{
    int osszege = 0;
    for (int i = 0; i <n ; ++i) {
        scanf("%i",&a[i]);
        osszege=osszege+a[i];
    }
    return osszege;
}


void  szorzat(int n,int a[n])
{
    int szorzata = 1;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%i",&a[i]);
        szorzata=szorzata+a[i];
    }
    return szorzata;
}


void atlag(int n)
{   int osszege;
    int atlag=0;
    atlag=osszege / n;
    return atlag;
}