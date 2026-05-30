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
    int sum_even=0, sum_odd=0;
    for (int j = 0; j<n ; j++)
    {
        if (j%2 !=0)
        {
           sum_odd+=array[j];
        }
        else{
            sum_even+=array[j];
        }
    }
     
    printf("THE diff IS : %d", sum_even-sum_odd);
    return 0;
    
}
