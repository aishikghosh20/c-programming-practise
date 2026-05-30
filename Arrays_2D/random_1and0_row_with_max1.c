#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    printf("ENTER THE NO OF ROWS IN MATRIX 1:\n");
    int n;
    scanf("%d", &n);

    printf("ENTER THE NO OF COLUMNS IN MATRIX 1:\n");
    int m;
    scanf("%d", &m);

    int a[n][m];

    //for random input
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            a[i][j] = rand()%2; //0 for even, 1 for a odd random number        
        }
    }

    printf("THE MATRIX IS :");

     for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);    
        }
        printf("\n");
    }

    printf("\n");

    int check =0;
    int row;

    for (int i=0;i<n;i++)
    {
        int count =0;
        for (int j=0; j<m; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
            }        
        }
        if (count >check)
        {
            check =count;
            row =i;
        }
    }
    printf("ROW %d HAS THE MAX NO OF 1s WITH THE COUNT OF %d",row+1,check);

return 0;
}

