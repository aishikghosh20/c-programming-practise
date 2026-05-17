#include <stdio.h>
int main()
{
printf ("ENTER THE NO OF LINES:\n");
int n;
scanf ("%d", &n);
int a=1; //to print the numbers
for (int i=1; i<=n;i++)
{
for (int j=1; j<=n-i; j++)
{
    printf(" ");
}

for(int k=1; k<=a ;k++)
{
    printf("%d", k);  
}
a=a+2; //to increase the number sequence with 2

/*        OR 
the no of stars are in an AP of : 1,3,5,7 and so on
where the nth term = 1+(n-1)*2 = 2n-1

so, for(j= 1 to 2*i-1)
will do the same
*/

printf("\n");
}
return 0;
}