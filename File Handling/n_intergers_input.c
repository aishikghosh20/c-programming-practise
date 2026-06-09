#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ENTER THE NUMBER OF INTERGERS:\n");
    int n;
    scanf("%d", &n);

    int* a = (int*)calloc(n,sizeof(int));
//or int* a = (int*)malloc(n * 4);

    int* p = a; // to store a copy of the pointer 
    int* ptr = a;


    // to input the interger numbers
    for(int i=1; i<=n; i++)
    {
        printf("ENTER THE NUMBER %d", i);
        scanf("%d", &(*a));
        a++;
    }

    // To print using the pointer p
      for(int i=1; i<=n; i++)
    {
        printf("%d ", *p);
       
        p++;
    }

    free(ptr);
    ptr = NULL;

    return 0;
}