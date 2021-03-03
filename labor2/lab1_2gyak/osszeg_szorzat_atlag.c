//
// Created by Bartha on 2021. 03. 03..
//

#include "osszeg_szorzat_atlag.h"

int osszeg(int n,int osszeg)
{osszeg=0;
int a[n];
for (int i = 0; i <n ; ++i) {
    scanf("%i",&a[i]);
    osszeg=osszeg+a[i];
    }
    return osszeg;
}


int szorzat(int n,int szorzat)
{
    szorzat=1;
    int a[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%i",&a[i]);
        szorzat=szorzat+a[i];
    }
}


int atlag(int a,int osszeg,float atlag)
{
    atlag=osszeg/n;
    return
}