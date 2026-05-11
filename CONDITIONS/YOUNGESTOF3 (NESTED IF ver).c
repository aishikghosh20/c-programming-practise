#include <stdio.h>
int main ()
{int a,b,c;
printf ("ENTER THE 3 AGES");
scanf ("%d %d %d", &a,&b,&c);
if (a<b)
{if (a<c)
printf ("\nA IS THE YOUNGEST");
else
printf ("\nC iS THE YOUNGEST");
}
else
{if (b<c)
printf("\nB IS THE YOUNGEST");
else
printf ("\nC IS THE YOUNGEST");
}
return 0;
}
