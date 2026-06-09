#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a = sizeof(int);
    printf("%d", a); // sizeof() gives the size of the thing present in it

    int* b =(int*)malloc(100*sizeof(int)); // creates an array 'b' and allocates a dynamic memory of 100to it

    // to print the default value stored by malloc
    printf("%d ", *b);

    printf("\n");
    int* c =(int*) calloc(100,sizeof(int)); 

    // to print the default value stored by calloc
    printf("%d ", *c);

    return 0;
}