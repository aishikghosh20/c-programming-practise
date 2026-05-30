#include <stdio.h>
int main()
{
    int a;
    printf("ENTER N0:\n");
    scanf("%d", &a);
    int b;
    printf("ENTER no:\n");
    scanf("%d", &b);

    a= a+b;
    b= a-b;
    a= a-b;
    printf("a= %d\n b= %d", a,b);
    return 0;
} 