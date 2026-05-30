#include <stdio.h>
int main()
{
    printf("ENTER THE NO OF STUDENTS:\n");
    int n;
    scanf("%d", &n);

    printf("ENTER THE NO OF SUBJECTS:\n");
    int m;
    scanf("%d", &m);

    int a[n][m];
    //for user input
    for (int i=0;i<n;i++)
    {
        printf ("ENTER THE marks of STUNDENY NO %d:\n",i+1);
        for (int j =0; j<m; j++)
        {
        printf ("ENTER THE marks of subject%d:\n",j+1);
        scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n");

    // For Output
    for (int i=0;i<n;i++)
    {
        for (int j =0; j<m; j++)
        {
       printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}