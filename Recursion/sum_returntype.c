#include <stdio.h>
int sum (int n)
{
    if (n==1) return 1; // base case to stop the loop and return 1
 /*      OR
    if (n==1 || n==0) return n; 
 */
    return n+(sum(n-1));
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);
    int s = sum(n);
    printf("The sum is : %d", s);
}