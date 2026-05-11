#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
         printf("\n");
         int a=1;
        for (int j=1; j<=i;j++)
        {
                printf("%d ",a);
                a=a+2;
        }
    }
    return 0;
}

