#include <stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);

    for (int i=n;i>=1;i--)
    {
         printf("\n");
        for (int j=1; j<=i;j++)
        {
        printf ("//");
        }
    }
    return 0;
}

