#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("ENTER THE NO OF ROWS IN MATRIX 1:\n");
    int n;
    scanf("%d", &n);

    
    int a[n][n];

    srand(time(NULL));

    //for random input
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n; j++)
        {
            a[i][j] = rand()%10; // setting a range of 0to9
        }
    }

    printf("THE MATRIX IS :\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);    
        }
        printf("\n");
    }

 // To transpose the matrix in the same array
 for (int i=0;i<n;i++)
    {
        for (int j=0; j<n; j++)
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
    
 // To reverse each row elements

   for (int i=0;i<n;i++)
   {
    int j=0, k=n-1;
    while(j<k)
    {
        // swapping element [i][j] with [i][k]
        int temp = a[i][j];
        a[i][j] =  a[i][k];
        a[i][k] = temp;
        j++;
        k--;
    }
   }

    printf("THE rotated MATRIX IS :\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);    
        }
        printf("\n");
    }

return 0;
}

