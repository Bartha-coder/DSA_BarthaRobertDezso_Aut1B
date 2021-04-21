#include <stdio.h>
#include "gyak.h"

/*Olvassuk be az alábbi fájl tartalmmát egy tömbbe majd
 egy dinamikus verembe, majd válaszolj a következő kérdésekre:*/

int main() {
    P *array;
    readArray("input.txt", &array);
    printf("Tomb elemei:\n");
    printArray(array);
    NType* stack = readStackFromFile("input.txt");
    printf("\n");
    printf("Verem elemei:\n");
    printStack(stack);
    return 0;
}
