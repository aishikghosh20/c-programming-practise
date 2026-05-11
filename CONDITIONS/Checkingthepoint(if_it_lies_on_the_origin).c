#include <stdio.h>
int main()
{int x1,y1;
printf ("Enter the X and Y Coordinates\n");
scanf("%d %d", &x1, &y1);
if (x1==0)
{
    if (y1==0)
    printf("These Points Lie on The Origin");
    else
        if(y1!=0)
        printf("These Points Lie on The Y-Axis");

}
else
{
    if(y1==0)
    printf("The Point Lies on The X-Axis");
    else
        printf("The Point Does Not Lie On The Neither Xaxis, Yaxis Nor The Origin");
}
return 0;
}

