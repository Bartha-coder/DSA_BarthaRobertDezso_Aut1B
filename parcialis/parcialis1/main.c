#include <stdio.h>
#include "tomb.h"

int main() {

    A *aray = createArray(50);
    readArray("be.txt", &aray);
    //fillArray(aray, aray->c, 0, 50);
    printArray(aray);
    printf("\n");
   printf( "%.2f\n" ,atlagokNegyzeteTomb( aray));


    return 0;
}
