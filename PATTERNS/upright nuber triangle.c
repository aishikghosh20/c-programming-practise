#include <stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
         printf("\n");
        for (int j=1; j<=i;j++)
        {
        printf ("%d ",j);
        }
    }
    return 0;
}
