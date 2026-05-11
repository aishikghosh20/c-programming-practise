#include <stdio.h>
int main()
{
    printf("ENTER A NUMBER:\n");
    int n;
    scanf("%d",&n);
    int m=1;
    for (int i=1;i<=n;i++)
    {
        m=m*i;
    }
    printf("THE THE FACTORIAL VALUE IS: \n%d",m);
    return 0;
}
