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

        //for user input
    printf ("ENTER THE ELEMENTS OF MATRIX \n");
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<m; j++)
        {
        scanf("%d", &a[i][j]);
        }
    }


    printf("ENTER THE COORDINATES !:\n");
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

printf("ENTER THE COORDINATES 2:\n");
    int c,d;
    scanf("%d", &c);
    scanf("%d", &d);

    printf("\n");
    int sum =0;

    for(int i=x-1; i<c-1; i++)
    {
        for(int j=y-1; j<d-1; j++)
        {
            sum+= a[i][j];
        }
    }
    printf("THE SUM IS :\n");
    
    printf("%d ", sum);          
       
  

return 0;
}

