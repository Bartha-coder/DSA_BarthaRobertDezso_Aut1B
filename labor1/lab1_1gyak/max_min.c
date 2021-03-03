//
// Created by Bartha on 2021. 02. 25..
//
#include "max_min.h"

int maxi(int n, int szam, int min) {
   scanf("%i",&n);
   max=szam;
   scanf("%i",&szam);
   for(int i=2;i<=n;++i)
   {
       scanf("%i",&szam);
       if(szam>max){
           max=szam;}
   }
  // printf("%i",max);
  return max;
}

int mini(int n, int szam, int min) {
    scanf("%i",&n);
    min=szam;
    scanf("%i",&szam);
    for(int i=2;i<=n;++i)
    {
        scanf("%i",&szam);
        if(szam<min){
            min=szam;}
    }
    //printf("%i",min);
    return min;
}