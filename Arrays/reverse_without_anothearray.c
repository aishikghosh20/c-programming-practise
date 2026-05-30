#include <stdio.h>
void reverse(int array[], int n)
{
    int i=0;
    int j = n-1;
    while (i<j)
    {
        int temp =array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        i--;
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
    reverse(array,n);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
return 0;
}