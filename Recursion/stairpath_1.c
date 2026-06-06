#include <stdio.h>
int paths (int n)
{
    if (n ==1 || n==2) return n;
    int totalways =paths(n-1) +paths(n-2);
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