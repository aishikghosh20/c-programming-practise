#include <stdio.h>
int main()
{
    printf("ENTER THE SIZE OF THE ARRAY:\n");
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0; i<n; i++)
    {
        printf("ENTER ELEMENT NO %d :\n", i+1);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for(int j = 0; j<n; j++)
    {
        if(array[j] > max)
        max =array[j];
        else
        continue;
    }
    printf("THE MAX VALUE IN THE ARRAY IS:\n %d", max);
}