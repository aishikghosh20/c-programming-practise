#include <stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF COLUMNS:\n");
    scanf("%d",&m);

    for (int i=1;i<=n;i++)
    {
         printf("\n");
        for (int j=1; j<=m;j++)
        {
        printf ("%d",j);
        }
    }
    return 0;
}
