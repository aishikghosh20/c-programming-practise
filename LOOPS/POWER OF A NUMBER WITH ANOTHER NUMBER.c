#include <stdio.h>
int main()
{
    printf("ENTER BASE:\n");
    int n;
    scanf("%d",&n);
    printf("ENTER POWER:\n");
    int m;
    scanf("%d",&m);
   int j=1;
    for (int i=1;i<=m;i++)
    {
      j=j*n;
    }
    printf("THE POWERED VALUE IS: \n%d",j);
    return 0;
}
