#include <stdio.h>
int main()
{
    int arr[5];
    for (int i =1; i<=5; i++)
    {
        printf("\nENTER THE ELEMENT %d  ", i);
        scanf("%d", &arr[i-1]);
    }
    printf("THE REVERSE ARRAY IS:\n");
    for (int j=4; j>=0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}