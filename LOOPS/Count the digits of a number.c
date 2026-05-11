#include <stdio.h>
int main()
{
    int n;
    printf ("ENTER A NUMBER:\n");
    scanf("%d", &n);
    int a=0;
    while(n!=0)
    {
        a++;
        n=n/10;
    }
    printf("THE NUMBER OF DIGITS :%d", a);
    return 0;
}
