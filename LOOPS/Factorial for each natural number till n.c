#include <stdio.h>
int main()
{
    printf("ENTER A NUMBER:\n");
    int n;
    scanf("%d",&n);
   unsigned long long m=1;
    int i;
    int j;
    for (i=1;i<=n;i++)
    {
        for (j=1; j<=i; j++)
        {
            m=m*j;
        }
        printf("THE FACTORIAL OF %d IS:   %llu\n",i,m);
        m=1;
    }

    /*     EASY METHOD
      for (i=1;i<=n;i++)
      {m=m*i;
      printf("THE FACTORIAL IS : %d", m);  //prints the factorial of that number and keep the data stored, which till will then multiply with the next number in loop
      }*/
    return 0;
}
