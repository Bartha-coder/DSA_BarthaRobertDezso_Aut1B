//
// Created by Bartha on 2021. 03. 10..
//

#include <stdio.h>
#include "par_para_poz_neg.h"


void paros_paratlan_pozitiv_negativ(int n)
{

    int paros=0;
    int paratlan=0;
    int pozitiv=0;
    int negativ=0;

    scanf("%i",&n);

    int a[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%i",&a[i]);

        if(a[i]%2==0){paros++;}

        else{paratlan++;}

        if(a[i]>=0){pozitiv++;}

        else{negativ++;}

    }
    printf("Parosak szama: %i \n",paros);
    printf("Paratlanok szama: %i \n",paratlan);
    printf("Pozitivak szama: %i \n",pozitiv);
    printf("Negativak szama: %i \n",negativ);
}