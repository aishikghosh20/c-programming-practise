#include <stdio.h>
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
    for (int j = 0; j<n ; j++)
    {
        if (j%2 !=0)
        {
            array[j]*2;
        }
        else{
            array[j] += 10;
        }
    }
    for(int k=0 ; k<n; k++)
    {
        printf("%d ", array[k]);
    }
    return 0;
    
}
