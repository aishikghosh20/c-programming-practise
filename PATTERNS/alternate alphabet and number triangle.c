#include <stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
         printf("\n");
         if (i%2!=0){
        for (int j=1; j<=i;j++)
        {
        printf ("%d ",j);
        }
         }
         else
         {
             for (int j=1;j<=i;j++)
             {
                 printf("%c ", j+64);
             }
         }
    }
    return 0;
}
