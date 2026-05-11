#include <stdio.h>
int main()
{int x1,y1,x2,y2,x3,y3;
printf ("Enter the 1st X and Y Coordinates\n");
scanf("%d %d", &x1, &y1);
printf ("Enter the 2nd X and Y Coordinates\n");
scanf("%d %d", &x2, &y2);
printf ("Enter the 3rd X and Y Coordinates\n");
scanf("%d %d", &x3, &y3);
double m1 = (y2-y1)/(x2-x1);
double m2 = (y3-y2)/(x3-x2);
if (m1==m2)
{
    printf("These Points Lie on a Straight Line");
}
else
{
    printf("These Poimjts Do Not Lie on a Straight Line");
}
return 0;
}
