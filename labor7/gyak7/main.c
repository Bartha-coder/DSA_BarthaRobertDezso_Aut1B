#include <stdio.h>
#include "functions.h"

int main() {
    NodeType *first=NULL , *last=NULL;
    int number,a;
    scanf("%i", &number);
    while(number != 0)
    {
       // insert (&first, &last,number %10);
       insert_before(&first,&last,number%10);
        number = number/10;
    }
    print(first);
    osszead(first);
    return 0;
}
