#include <stdio.h>
int main()
{
    printf("ENTER A NUMBER:\n");
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("the fibonacci series is: %d %d",a,b);
    int sum;
    for (int i=1;i<=n-2;i++)
    {
        sum=a+b;
        printf(" %d", sum);
        a=b;
        b=sum;
    }
    return 0;
}
