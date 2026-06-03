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
    for (int i = 1; i <=n-1; i++) //n-1 passes 
    {
        int j=i;
        while ((a[j]<a[j-1]) && j-1>=0) 
        {
           int temp = a[j];
        a[j]=a[j-1];
       a[j-1] = temp;
       j--;
        }
       
    }

    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}
