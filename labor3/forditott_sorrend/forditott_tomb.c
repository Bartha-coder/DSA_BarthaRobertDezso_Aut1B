//
// Created by Bartha on 2021. 03. 04..
//

#include <stdio.h>
#include "forditott_tomb.h"

void kiir(double *a,int n)
{
    for(int i=n-1;i>=0;--i)
    {
        printf("%.lf ",a[i]);
    }

}