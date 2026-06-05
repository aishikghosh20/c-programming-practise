#include <stdio.h>
int fibo (int n)
{
    if (n <=2) return 1;
    int ans = fibo(n-1) +fibo(n-2);
    return ans;
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);
    printf("The Number is : %d",fibo(n));
}