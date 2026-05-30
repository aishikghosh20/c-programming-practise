#include <stdio.h>
int main()
{
    printf("ENTER THE NO OF ROWS IN MATRIX 1:\n");
    int n;
    scanf("%d", &n);

    printf("ENTER THE NO OF COLUMNS IN MATRIX 1:\n");
    int m;
    scanf("%d", &m);

    int a[n][m];

    printf("ENTER THE NO OF ROWS IN MATRIX 2:\n");
    int x;
    scanf("%d", &x);

    printf("ENTER THE NO OF COLUMNS IN MATRIX 1:\n");
    int y;
    scanf("%d", &y);

    int b[x][y];

    if (( n == x) && ( m==y))
    {
    //for user inpput
    printf ("ENTER THE ELEMENTS OF MATRIX 1 \n");
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }

    printf ("ENTER THE ELEMENTS OF MATRIX 2 \n");
    for (int i=0;i<x;i++)
    {
        for (int j=0; j<y; j++)
        {
        scanf("%d", &b[i][j]);
        }
    }
    
    printf("\n");

    //int sum[n][m]; // using a new array wastes memory

    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            a[i][j]= (a[i][j] + b[i][j]);           
        }   
    }

    printf("THE SUM IS :\n");
    for (int i=0;i<n;i++ ) 
    {
        for (int j=0; j<m; j++)
        {
           printf("%d ", a[i][j]);          
        }   
        
        printf("\n");
    }


return 0;
}
else
{
printf("ADDITIONN IS NOT POSSIBLE");
return 1;
}
}