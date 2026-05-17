#include <stdio.h>
int main()
{
printf ("ENTER THE NO OF LINES:\n");
int n;
scanf ("%d", &n);

for (int i=1; i<=n;i++)
{
for (int j=1; j<=n-i; j++)
{
    printf("  ");
}

//for the upright triangle of the alphabets 
for(int k=65; k<=64+i ;k++) 
{
    printf("%c ", k);
}

//for the upright triangle in reverse order of alphabets
for(int l = 63+i; l>=65; l--) 
{
    printf("%c ", l);
}
  

printf("\n");
}
return 0;
}