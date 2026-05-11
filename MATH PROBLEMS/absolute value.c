#include <stdio.h>
int main ()
{
//enter a number
int n;
printf("enter a no :");
scanf ("%d", &n);
if (n<0)
{
    n= n*(-1);
printf ("absolute number is : %d", n);
}
else{

    printf("absolute number is : %d", n);
}
return 0;
}
