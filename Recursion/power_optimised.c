#include <stdio.h>
int power( int n, int m)
{
    // Base case
   if (m==0) return 1;

   int a = power(n, m/2);
   
   if (m %2 ==0) return a*a;   // n^m = n^m/2 * n^m/2 
   else return a*a*n;          // n^m = n^m/2 * n^m/2 * n 
}
int main()
{
    int n;
    printf ("ENTER THE BASE\n");
    scanf ("%d", &n);

    int m;
    printf ("ENTER THE POWER\n");
    scanf ("%d", &m);

  printf("The pdt is : \n%d", power(n, m));
return 0;
}