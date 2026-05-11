#include <stdio.h>
int main()
{ int a;
printf("enter a no");
scanf("%d", &a);
if (a%5==0 || a%3==0)
{
    printf ("\nIT IS divisible by either 5 or 3");
}

else
{
    printf("\nIT IS NOT DIVISIBLE BY EITHER 5 or 3");
}

    return 0;
}
