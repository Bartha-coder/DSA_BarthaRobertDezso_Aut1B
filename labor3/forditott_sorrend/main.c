#include <stdio.h>
#include <stdlib.h>
#include "forditott_tomb.h"

int main() {
    double *a;
    int n;
    scanf("%i",&n);
    a=(double*)malloc(n*sizeof(double));
    if(a==NULL){
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        scanf("%lf",&a[i]);
    }
    kiir(a,n);
    free(a);
    return 0;
}
