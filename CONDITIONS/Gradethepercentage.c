#include <stdio.h>
int main()
{ float a,b,c,d,e;
printf("ENTER 5 MARKS");
scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);
float p = ((a+b+c+d+e)/500)*100;
if (p>=40)
{
    if (p>=90)
        printf ("\nS GRADE");
    else if(p>=80 && p<90)
        printf ("\nA GRADE");
    else if (p>=70 && p<80)
             printf ("\nB GRADE");
    else if (p>=60 && p<70)
    printf("\nC GRADE");
    else
    printf("\nD GRADE");
}
else
    printf("\nF GRADE");
    return 0;
}
