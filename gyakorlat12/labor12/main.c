#include <stdio.h>
#include "heap_kupac.h"

int main() {
    heap *h = createHeap(32);
    FILE *f = fopen("input.txt", "r");
    int buffer;
    while
            (fscanf(f, "%i", &buffer) != EOF)
    {

        insert(h,buffer);
    }
    for(int i =1; i <= h->size ; ++i)
    {printf("%i, ", h->data[i]);}


    printf("\nA legkisebb elem az allomanybol: %i",h->data[1]);

    return 0;
}
