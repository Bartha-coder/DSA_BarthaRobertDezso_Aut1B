//
// Created by Bartha on 2021. 03. 03..
//

#include "paros_paratlan_pozitiv_negativ.h"


int paros_paratlan_pozitiv_negativ(int n,int paros,int paratlan,int pozitiv,int negativ)
{
int a[n];
     paros=0;
     paratlan=0;
     pozitiv=0;
     negativ=0;
    for (int i = 0; i <n ; ++i) {
        scanf("%i",&a[i]);
        if(a[i]%2==0){paros++;}
        else{paratlan++;}
        if(a[i]>0){pozitiv++;}
        else{negativ++;}
    }
    return paros,paratlan,poozitiv,negativ;

}
