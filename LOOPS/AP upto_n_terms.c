#include <stdio.h>
int main()
{
int x;
printf("ENTER THE NUMBER:\n");
scanf("%d", &x);
printf(" THE AP IS :\n");

//AP of 1,3,5,7,.......,nth term

for (int i=1; i<=x;i=i+1)
{
    int m = 1 + (i-1)* 2; // 2 is the common difference
    if (i==x)
    printf("%d    <======= THIS THE LAST NUMBER OF THE AP\n", m);
    else
        printf("%d \n", m);

    /** */

}
return 0;
}

