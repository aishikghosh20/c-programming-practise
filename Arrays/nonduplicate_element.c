#include <stdio.h>
#include <stdbool.h>
int main()  
{
    int n;
    printf("ENTER THE NO OF ELEMENTS:\n");
    scanf("%d", &n);
    int array[n];
    int reverse[n]; 

    for(int i = 0; i < n; i++)
    {
    printf("ENTER THE ELEMENT NO %d\n", i+1);
    scanf("%d", &array[i]);
    }
 
   
    for (int i=0; i<n; i++)
    {
        bool check = false;
        for(int j = i+1;j<n; j++)
        {
            if(array[i] == array[j])
        {
            check = true;
        }
        }

        if(check == false)
        {
            printf("%d\n",array[i]);
            break;
        }
    }
    
    return 0;

}