#include <stdio.h> // preprocessor directive with header file
#include <math.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    printf("HELLO!"); // printf() is present in stdio.h file

    float x = sqrt(3); // math functions present in math.h file
    float y = cbrt(8);

    printf("%f \n %f", x,y);

    int max = INT_MAX;  // the max and min limits of int datatype is present in limits.h

    bool flag = true; // boolean datatypes are present in <stdboo.h> header file
}
