#include <stdio.h>
int main()
{
int n;
printf("ENTER THE NUMBER OF ROWS:\n");
scanf("%d", &n);
int a=1;
for (int i=1;i<=n;i++)
{
printf("\n");
for (int j =1; j<=i; j++)
{
printf("%d ", a);
    a=a+2;
}
}
return 0;
}