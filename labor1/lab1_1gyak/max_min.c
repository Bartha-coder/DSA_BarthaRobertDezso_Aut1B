//
// Created by Bartha on 2021. 02. 25..
//
#include "max_min.h"

int maxi(int a, int b, int c) {
    scanf("%i%i%i",&a,&b,&c);
    if(a>b && a>c){return ("Az elso a legnagyobb %i,a)};
        else if(b>a && b>c){return ("Az masodik a legnagyobb %i,b)};
            else if(c>a && c>b){return ("Az harmadik a legnagyobb %i,c)};

}

int mini(int a, int b, int c) {
    scanf("%i%i%i",&a,&b,&c);
    if(a<b && a<c){return ("Az elso a legkisebb %i,a)};
        else if(b<a && b<c){return ("Az masodik a legkisebb %i,b)};
            else if(c<a && c<b){return ("Az harmadik a legkisebb %i,c)};

}


