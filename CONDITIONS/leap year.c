#include <stdio.h>
int main ()
{
//enter costprice
int a;
printf("enter costprice :");
scanf ("%d", &a);
int b;
printf("\n Enter selling price : ");
scanf("%d", &b);
int m = b-a;
if (m<0)
{ int n= m * -1;
printf ("LOSS OF %d INCURED", n);
}
if (m==0)
{
    printf("\nbreakeven point reached ");
}
if (m>0)
{
    printf("\nPROFIT OF %d MADE", m);
}

return 0;
}
