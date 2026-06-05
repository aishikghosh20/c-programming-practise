#include <stdio.h>
void prints(int n, int x)
{ 
   printf("%d\n", x);
   if (x == n) return;  // prints and then checks 
    prints(n, x+1);
    return;    
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);
    int x =1;
   prints(n, x);
   return 0;
}