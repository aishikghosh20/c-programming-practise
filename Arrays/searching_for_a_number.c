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

    printf("ENTER THE NUMBER TO SEARCH:\n");
    int x;
    scanf("%d", &x);
int count = 0;
    for(int i =0; i<n; i++)
    {
        if (array[i] == x)
        {printf("THE NUMBER EXISTS AT POSITION %d OF THE ARRAY\n", i+1);
            break;}
        else
        count++;
        }

        if (count !=0)
        printf("THE ELEMENT DOES NOT EXIST IN THE ARRAY\n");
    
    return 0;
}