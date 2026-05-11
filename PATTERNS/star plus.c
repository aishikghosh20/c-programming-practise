#include <stdio.h>
int main()
{
   int n;
    printf("ENTER THE NUMBER ROWS:\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
         printf("\n");
         if (i%3==0)
         {
        for (int j=1; j<=5;j++)
        {
        printf ("*");
        }
         }
         else
         {
            for (int j=1; j<=5;j++)
            {
                if(j==3)
                    printf("*");
                else
                    printf("#");
            }
         }
    }
    /**    OR
     for(i=1 to n);
      for(j=1 to n)
      if  (i==3 || j==3)
      printf(*)
      else
      printf(#)*/

    return 0;
}
