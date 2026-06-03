#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{

    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);

    int a[n], b[n];
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
    int index =0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != 0)
        {
           b[index]  =a[i];
           index++;
        }
    }

    for(int i=index; i<n;i++)
    {
       b[i] =0;
    }

    for(int i=0; i<n;i++)
    {
        printf("%d ", b[i]); 
    }
    return 0;
}
