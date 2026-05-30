#include <stdio.h>
void reverse(int array[], int si, int ei)
{
    for(int i = si, j =ei; i<j; i++,j--)
    {
        int temp =array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("ENTER THE NO OF ELEMENTS:\n");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++)
    {
        printf("ENTER THE ELEMENT NO %d\n", i+1);
        scanf("%d", &array[i]);
    }

    int si, ei;
    printf("ENTER THE STARTING INDEX TO REVERSE:\n");
    scanf("%d", &si);
    printf("ENTER THE LAST INDEX OF THE TO REVERSE:\n");
    scanf("%d", &ei);

    reverse(array,si,ei);

    for(int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    
return 0;
}