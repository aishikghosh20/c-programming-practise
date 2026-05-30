#include <stdio.h>
#include <math.h>

void greet() // void is used as the return-type as the function returns no data/value
{
    printf("Hello\n");
    return; // ends the function
}

int add(int x, int y) // int is used as the parameters and the sumation are int datatype
{
    int sum = x+y;
    return sum; // returns the sum the as the final result
}
float sub(int j, int k)
{
    return j-k; // returns the value of this operation whose type is float according to the return-type mentioned
}

int main ()
{
    greet(); // calls the greet() function
    int a=1, b=5;
    int sum = add(a,b); // these a and be become the parameters--> x and y respectively for the add()
    float rt = sqrt(a+b); // sq.root function from math.h
    float power = pow(a,b); //pow() function from math.h
    printf("%d \n%f \n", sum, rt);
    printf("%f\n%f\n", sub(a,b), power);
    int pdt(int x, int y); // creates a prototype function
    int x = pdt(a,b);
    printf("%d", x);

    return 0;
}

int pdt(int x, int y) // function can be called irrespective of it position wrt the main()
{
    return x*y;
}

/* 
prints:
Hello
6 
2.449490 
-4.000000
1.000000
5
*/