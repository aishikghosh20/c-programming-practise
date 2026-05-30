#include <stdio.h>

int fact(int x) // function to calculate the factorial
{
    int fact =1;
    for (int i=1; i<=x; i++)
    {
        fact= fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("ENTER N:\n");
    scanf("%d", &n);
    int r;
    printf("ENTER R:\n");
    scanf("%d", &r);

    int nr = n-r;
    int nfact = fact(n); // n!
    int rfact = fact(r); // r!
    int nrfact = fact(nr); // (n-r)!
    
    int ncr = nfact/(rfact * nrfact);
    printf("\nThe No Of Combinations :\n%d", ncr);
    return 0;
} 