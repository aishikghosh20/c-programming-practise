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

    // to print the array randomly generated
    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }
    printf("\n");

    printf("\nTHE SORTED ARRAY IS :\n");

    // Now to reverse bubble sort
    for (int i = 0; i < n-1; i++)
    {
        bool flag =true;
        for (int j=0; j<n-1-i; j++)
        {
            if (a[j] < a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
                flag =false;
            }
        }
        
        if (flag == true) break;
        
    }

    for(int i=0; i<n;i++)
    {
        printf("%d ", a[i]); 
    }

    return 0;
}
