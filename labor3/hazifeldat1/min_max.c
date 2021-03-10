//
// Created by Bartha on 2021. 03. 10..
//

#include <stdio.h>
#include "min_max.h"

void maxi(int n, int szam) {

    scanf("%i",&n);
    scanf("%i",&szam);
    int max=szam;
    for(int i=2;i<=n;++i)
    {
        scanf("%i",&szam);
        if(szam>max){
            max=szam;}
    }
    printf("%i",max);
}


void mini(int n, int szam) {
    scanf("%i",&n);
    scanf("%i",&szam);
    int  min=szam;
    for(int i=1;i<n;++i) {
        scanf("%i", &szam);
        if (szam < min) {
            min = szam;
        }
    }
    printf("%i",min);
}
