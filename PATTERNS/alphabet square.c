#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
         printf("\n");
        for (int j=1; j<=n;j++)
        {
        printf ("%c ",j+64);

        /* or
          for (int j=65; j<=65+(i-1);j++)
        {
        printf ("%c ",j);    */
/**   ___________________________________________   */

        /*  OR
         j=j+64
         char c= (char)j;  */

        }
    }
    return 0;
}
