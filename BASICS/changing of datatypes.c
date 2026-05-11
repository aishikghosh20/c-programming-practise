#include <stdio.h>
int main ()
{
//take a float input and print the fraction part
float a, y;
int b;
printf("enter a decimal no :");
scanf ("%f", &a);
b = a;
y= a-b;
printf ("\nthe fractional part is : %f", y);
return 0;
}
