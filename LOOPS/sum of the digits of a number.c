#include <stdio.h>
int main ()
{
    int n;
    printf("ENTER A NUMBER");
    scanf("%d", &n);
    int a=0;
    while (n!=0)
    {
       a=a+(n%10);  //n div by 10 gives the last digit as the remainder
       n=n/10;   //n/10in the int format removes the digit
    }
    printf("THE SUM IS : %d", a);
    return 0;
}









