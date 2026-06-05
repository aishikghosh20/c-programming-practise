#include <stdio.h>
void prints(int n, int sum)
{
   if (n ==0) 
   {
   printf("%d\n", sum);
    return;
   }
   prints(n-1, sum+n);
    return;    
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);

   prints(n, 0);
}