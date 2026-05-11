#include <stdio.h>
int main()
{ int n;
printf ("Enter a number:");
scanf ("%d", &n);
if ( n % 5 ==0)
{
    if ( n%3 == 0)
    {
        printf ("\nDIVISIBLE BY 5 AND 3");
    }
    else
    {
         printf ("\nDIVISIBLE BY 5 BUT NOT DIVISIBLE BY 3");
    }
}
else
{
    if (n%3 ==0)
    {
         printf ("\nNOT DIVISIBLE BY 5 BUT DIVISIBLE BY 3");
    }
    else
    {
         printf ("\nNOT DIVISIBLE BY 5 AND NOT DIVISIBLE BY 3");
    }
}

    return 0;
}
