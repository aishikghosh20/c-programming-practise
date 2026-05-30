#include <stdio.h>
int main()
{
    int a[3][3];
    //for user input
    for (int i=0;i<3;i++)
    {
        for (int j =0; j<3; j++)
        {
        printf ("ENTER THE VALUE OF ELEMENT (%d,%d):\n", i,j);
        scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n");

    // For Output
    for (int i=0;i<3;i++)
    {
        for (int j =0; j<3; j++)
        {
       printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}