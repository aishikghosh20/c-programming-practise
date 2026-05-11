#include <stdio.h>
int main()
{ int n;
printf ("Enter a number:");
scanf ("%d", &n);
if ( n % 5 == 0 || n%3==0 )
{
    if ( n%15 != 0)
    {
        printf ("\nDIVISIBLE BY 5 OR 3 BUT NOT BY 15");
    }
    else
    {
         printf ("\nDIVISIBLE BY 5 OR BY 3 AND ALSO BY 15");
    }
}
else
{
  printf ("\nNOT DIVISIBLE BY 5 OR 3 ");
}
  return 0;

}
