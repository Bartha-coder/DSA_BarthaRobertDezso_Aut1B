#include <stdio.h>
#include <time.h>
#include "hasito.h"

int main() {
    int poz,k,m,n,x;
    scanf("%i",&m);//tomb merete
    printf("Elemek szama:");
    scanf("%i",&n); //elemek szama
    int *t = create(m);///helylefoglalas a memoriaban
    for(int i=0;i<n;++i){
        scanf("%i",&x);
        beszur(x,t,m);
    }
    print(t,m);
    printf("\nKeresett elem:");
    scanf("%i",&k);
    clock_t start = clock();
    poz=keres(k,t,m);
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%lf",time_spent);
    printf("\nElem pozicioja: %i",poz);
    return 0;
}
