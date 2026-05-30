#include <stdio.h>
int main()
{
    //int arr[5]; creates 5 boxes in the memory of int datatype
    int arr[5] = {2, 4, 6, 8, 1}; // initializes the array elements 
    printf("%d\n", arr[4]);
    arr[4] = 100; // updates the value of the corresponding element
    printf("%d", arr[4]);
    return 0;
}
 