#include <stdio.h>
#include <stdlib.h>
#include "osszeg_szorzat_atlag.h"

int main() {

    int  *a;
    int n;
    scanf("%i",&n);
    a=(int *)malloc(n*sizeof(int ));
    if(a==NULL){
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        scanf("%i",&a[i]);
    }

    osszeg(n,a[n]);
    szorzat(n,a[n]);
    atlag(n);
    free(a);
    return 0;
}
