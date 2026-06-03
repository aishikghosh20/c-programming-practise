#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{

    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);

    int a[n];
printf("ENTER THE ARRAY\n");
    for(int i=0; i<n;i++)
    {
       scanf("%d",&a[i] ); // to assign values
    }

    
    printf("\nTHE UNSORTED ARRAY IS :\n");
   
    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }
    printf("\n");

    printf("\nTHE SORTED ARRAY IS :\n");

    // Now to sort
    
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = i; j < n-1; j++)
        {
        if (a[j] == 0)
        {
          int temp = a[j];
          a[j] = a[j+1];
          a[j+1]= temp;
        }
    }
    }

    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }
    return 0;
}
