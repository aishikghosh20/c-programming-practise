#include <stdio.h>
int paths (int n)
{
    //base cases
    if (n ==1 || n==2 ) return n; 
    if(n==3) return 4;
    // Computing total no of ways
    int totalways =paths(n-1) +paths(n-2) +paths(n-3);
    return totalways;
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);
    printf("The Number of ways/paths is : %d",paths(n));
    return 0;
}