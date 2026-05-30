#include <stdio.h>
int min(int x, int y)
{
    int min;
    if (x<y)
    min =x;
    else
    min =y;

    return min;
}
int hcf(int a, int b)
{
    int hcf;
for (int i=1; i<=min(a,b); i++)
   {
    if (a%i ==0 && b%i == 0)
    {
        hcf =i;
    }
    else{
        continue;
    }
   }
return hcf;
}

int main()
{
    int a;
    printf("ENTER 1st N0:\n");
    scanf("%d", &a);
    int b;
    printf("ENTER 2nd no:\n");
    scanf("%d", &b);
    int factor = hcf(a,b);
    printf("\n%d", factor);
    return 0;
} 