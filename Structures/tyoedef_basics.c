#include <stdio.h>

typedef float realnumber; // realnumber becomes the new name for float
typedef int naturalnumber;

int main()
{
    realnumber x =5.5432; // this "realnumber" will function as the floating datatype
    realnumber y = 6.732234;

    naturalnumber a= 5; // naturalnumber us will function as the int datatype
    naturalnumber b= 6;

    printf(" %f \n %f \n %d \n %d",  x, y, a, b);

    return 0;
}