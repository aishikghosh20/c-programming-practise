#include <stdio.h>
typedef int* pointer; // newname is "pointer"

int main ()
{
    int x=5, y=7;
    int* a, b; // it will create -  int* a  and  int b  - instead of 2 pointers
    a= &x;
    b= y;  // b = &y  -> error

    printf("%p\n", a); // prints out the address of x
    printf ("%p\n", b); /// error and garbage value printed
    printf("%d\n", b); // can only print the value inside y


    // This can be solved by using the typedef

    pointer c= &x, d= &y; // creates two pointers 
    printf("%p\n", c); // prints out the address of x
    printf("%p\n", d); // can print the address of y
    
    return 0;
}

/*     Before fix                             After fix
     000000184B5FFA3C                      000000184B5FFA3C
     0000000000000007                      000000184B5FFA38
     7    

*/