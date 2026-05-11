#include <stdio.h>
int main()
{
    printf("ENTER THE NO OF ROWS:");
    int n;
    scanf("%d", &n);
     printf("ENTER THE NO OF COLUMNS    :");
    int a;
    scanf("%d", &a);

    for (int i=1;i<=n;i++)
    {
        printf("\n");
        if (i==1 || i==n)
        {
        for(int j=1;j<=a;j++)
      {
           printf("*");
          }
        }
else
{
     for(int j=1;j<=a;j++)
     {
         if (j>1 && j<a)
            printf(" ");
         else
            printf("*");
     }
}

    }
    return 0;
}
