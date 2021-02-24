#include <stdio.h>
int functions(int a,int b)
{
    return a+b;
}

int main() {
    int a,b;
    scanf("%i%i",&a,&b);
    printf("%i",functions(a,b));
    return 0;
}
