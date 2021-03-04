//
// Created by Bartha on 2021. 03. 04..
//

#include "linearis_kereses.h"

int linearSearch(int a[],int size,int search,int *counter)
{
    int i;
    for(i=0;i<size ;++i)
    {
        *counter++;
        if(a[i]==search)
        {
            return i;
        }
    }
    return -1;
}