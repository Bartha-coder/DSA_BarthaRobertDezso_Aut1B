#include <stdio.h>
#include "gyak1.h"

int main() {

    NodeType *topPtr=NULL;
    int data;
   // push( *topPtr,data);
    push(&topPtr,5);
    push(&topPtr,6);
    push(&topPtr,7);
    push(&topPtr,8);
    push(&topPtr,9);
    push(&topPtr,10);
    printf("%i ",pop(&topPtr));
    return 0;
}