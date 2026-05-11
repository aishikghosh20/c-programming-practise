#include <stdio.h>
int main()
{
    printf("ENTER NUMBER:\n");
    int n;
    scanf("%d",&n);
    int original =n;
   int j=1;
   int sum=0;
   while(n!=0)
   {
       int m=n%10;
       j= m*m*m;
       sum= sum+j;
       n=n/10;
   }
   printf("THE SUM IS : \n%d", sum);
   if (sum==original)
    printf("\n%d IS AN ARMSTRONG NUMBER", original);
   else
    printf("\n%d IS NOT AN ARMSTRONG NUMBER", original);
    return 0;
}
