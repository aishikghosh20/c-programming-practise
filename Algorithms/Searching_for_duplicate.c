#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("ENTER THE NO OF ELEMENTS:\n");
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        printf("ENTER THE ELEMENT NO %d\n", i+1);
        scanf("%d", &a[i]);
    }

    int b[100]; //asuming the elements of a will be within 100

    int duplicate, index;
    for(int i=0; i<n; i++)
    {
        if(b[a[i]] == 0) 
        {
            b[a[i]] =1;
        }
        else
        {
            index = i;
            duplicate = a[i];
        }
    }
    printf("THE DUPLICATE ELMENT IS %d AT POSITION %d", duplicate, index+1);



}