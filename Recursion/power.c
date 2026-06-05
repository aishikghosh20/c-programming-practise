#include <stdio.h>
int power( int n, int m)
{
   if (m==0) 
   {
    return 1;
   }
   
    return n*power(n, m-1);    
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