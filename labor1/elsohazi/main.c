#include <stdio.h>
int osszeadas(int a,int b)
{
    return a+b;
}

int main() {
    int a,b;
    scanf("%i%i",&a,&b);
    printf("%i",osszeadas(a,b));
    return 0;
}
