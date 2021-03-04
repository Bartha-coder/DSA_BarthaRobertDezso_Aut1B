#include <stdio.h>
#include <time.h>
#include "linearis_kereses.h"


int main() {
    int size=10;
    int a[size],i,search,pos;
    int counter;
    for(i=0;i<size;++i)
    {
        a[i]=i+1;
    }
    printf("irj be egy szamot\n");
    scanf("%d",&search);
    clock_t start,end;
    start=clock();
    pos=linearSearch(a,size,search,&counter);
    end=clock();
    if(pos==-1)
    {
        printf("%d benne van a tommben\n",search);
    }
    else {
        printf("%d jelen van ebben a pozocioban %d \n",search,pos+1);
    }
    double time_taken = ((double )(end-start))/CLOCKS_PER_SEC;

    printf("linearis keresesnek ennyi idobe telt lefutni %lf \n",time_taken);
    printf("muveletek szama: %d \n",counter );
    return 0;
}
