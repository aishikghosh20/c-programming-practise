#include <stdio.h>
int main()
{
    printf("ENTER THE NO OF ROWS:");
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
{    printf("\n");
        for(int j=1;j<=n;j++)
            if (i==j || (i+j)== n+1)
            printf("*");
        else
            printf(" ");
}


    return 0;
}
