#include <stdio.h>
#include "functions_IntArray.h"

int main() {
    IntArray *array;
    readArray("input.txt", &array);
    printArray(array);
    return 0;
}