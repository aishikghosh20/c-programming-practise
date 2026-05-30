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
   int m;
   printf("Enter the value to check:");
   scanf("%d", &m);
   for(int j = 0; j<n; j++)
   {
    for (int k = j+1; k< n; k++)
    {
        int sum = array[j] + array[k];
        if (sum == m)
        printf("(%d,%d)\n",array[j], array[k]);
        else
        continue;
    }
   }
    return 0;
    
}
