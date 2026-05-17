#include <stdio.h>
int main()
{
printf ("ENTER THE NO OF LINES:\n");
int n;
scanf ("%d", &n);

for (int i=1; i<=n;i++)
{
// for the upside_down triangle of whitespaces
for (int j=1; j<=n-i; j++)
{
    printf("_ ");
}

//for the upright triangle of numbers 
//from 1 to the row_number(i)
for(int k=1; k<=i ;k++) 
{
   printf("%d ", k);
}

// for the upright triangle of numbers in reverse order
//from (i-1) to 1
for (int l = i-1; l>=1; l--) 
{
    printf("%d ", l);
}

printf("\n");
}
return 0;
}