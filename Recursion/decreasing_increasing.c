#include <stdio.h>
void prints(int n)
{
   if (n ==0) return; // base case
     printf("%d\n", n); 
    prints(n-1); // call
     printf("%d\n", n); 
    return;    
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);
   prints(n);
}
