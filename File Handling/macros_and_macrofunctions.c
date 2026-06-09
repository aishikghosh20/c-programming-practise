#include <stdio.h>

#define pi 3.14159265359 // macro : assigning a value to 'pi'
#define area2(r) (pi*r*r) // macro function 


float area (float r)
{
    return (pi*r*r);
}
int main()
{
    double x = pi;
    printf("%f\n", x) ;   // prints: 3.141593

    // the range of double printing can be increased to a max of 15 decimal places
    printf("%.15f\n", x);


    float radius = 23.56;
    float a = area(radius);

    printf("%f\n", a);

    //  OR  
    float b = area2(radius);
    printf("%f\n", b);

return 0;
}