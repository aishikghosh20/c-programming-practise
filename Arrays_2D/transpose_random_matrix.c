#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("ENTER THE NO OF ROWS IN MATRIX 1:\n");
    int n;
    scanf("%d", &n);

    printf("ENTER THE NO OF COLUMNS IN MATRIX 1:\n");
    int m;
    scanf("%d", &m);

    int a[n][m];

    srand(time(NULL));

    //     //for user input
    /* 
    printf ("ENTER THE ELEMENTS OF MATRIX \n");
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
         scanf("%d", &a[i][j]);
        }
    }  
    */



    //for random input
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            a[i][j] = rand()%10; // setting a range of 0to9
        }
    }

    printf("THE MATRIX IS :\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);    
        }
        printf("\n");
    }

    if (n != m)
    {
    // To store the matrix in a new array
    int transpose[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0; j<n; j++)
        {
        transpose[i][j] = a[j][i];
        }
    }

    printf("THE TRANSPOSED MATRIX IS :\n");

     for (int i=0;i<m;i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",transpose[i][j]);    
        }
        printf("\n");
    }
}
else
{
// To store the matrix in the same array
 for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
           if (i==j)
           continue;
           else if (i<j)
           {
            int temp =a[i][j];
            a[i][j] = a[j][i];
            a[j][i]=temp;
           }   
        }
        printf("\n");
    }

    printf("THE TRANSPOSED MATRIX IS :\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);    
        }
        printf("\n");
    }

}
return 0;
}

