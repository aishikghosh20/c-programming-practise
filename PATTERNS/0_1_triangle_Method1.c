#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);
    int a;
    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
        a=1;
        else
        a=0;     
         printf("\n");
        for (int j=1; j<=i;j++)
        {
        printf ("%d ", a );
        if (a==1)
        a=0;      // switches the value
        else
        a=1;
        }
    }
    return 0;
}

