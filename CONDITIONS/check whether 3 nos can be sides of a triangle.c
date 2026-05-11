#include <stdio.h>
int main()
{ int a,b,c;
printf("enter 3 nos");
scanf("%d %d %d", &a, &b, &c);
if ((a+b)>c && (a+c)>b && (b+c)>a )
{
    printf("The 3 nos can be sides of a triangle");
}
else
{
    printf("The 3 nos cannot be sides of a triangle");
}
return 0;
}
