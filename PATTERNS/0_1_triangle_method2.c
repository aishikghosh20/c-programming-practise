#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);
    int a;
    for (int i=1;i<=n;i++)
    {
         printf("\n");
        for (int j=1; j<=i;j++)
        {
         if((i+j)%2==0) 
        printf ("1 ");
        else
        printf ("0 ");
        }
    }
    return 0;
}

