#include <stdio.h>
int main()
{ int a,b,c;
printf("enter 3 nos");
scanf("%d %d %d", &a, &b, &c);
int max = a;
if (b>a && b>c)
{ max =b;
    printf ("\nthe greatest no is: %d", max);
}

else if(c>a && c>b)
{
    max =c;
    printf("\nthe greatest no is: %d", max);
}
else{
    printf ("\nthe greatest no is: %d", max);

}
    return 0;
}
