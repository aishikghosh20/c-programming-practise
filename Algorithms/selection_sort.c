#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n;i++)
    {
        a[i] = rand()%11; // to assign random values
    }

    
    printf("\nTHE UNSORTED ARRAY IS :\n");
    // to print the randomly generated arra
    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }
    printf("\n");

    printf("\nTHE SORTED ARRAY IS :\n");

    // Now to sort
    for (int i = 0; i < n-1; i++) //n-1 passes 
    {
        int min= INT_MAX;
        int index_min =-1;
        for (int j = i; j <=n-1; j++)
        {
            if (min > a[j])
            {
             min =a[j];
             index_min = j;
            }
        }
        
        //swap the min element and the 1st element
        int temp = a[index_min];
        a[index_min]=a[i];
       a[i] = temp;
    }

    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}
