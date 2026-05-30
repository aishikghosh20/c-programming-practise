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
    int a;
    printf("ENTER No Of Rows:\n");
    scanf("%d", &a);  
    int nsp = a-1; 
    for (int i=0; i<=a-1; i++)
    {
        int n=i; 
        printf("\n");
        for (int k =1; k<= nsp; k++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++)
        {
            int r=j;
            int ncr = fact(n)/(fact(r) * fact(n-r));
            printf("%d", ncr);
              if(j<i)
            {
                printf("_");
            }

        }
        nsp--;
    }
    return 0;
} 