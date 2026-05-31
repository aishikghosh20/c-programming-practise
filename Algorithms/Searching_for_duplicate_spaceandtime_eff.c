#include <stdio.h>
int main()
{
    //use this method if all nos from 1 to 10 are present in the array
    int a[11] = {6,1,7,3,2,5,4,8,9,9,10};

   int sum = (10*11)/2; // to add the nos from 1 to , using n(n+1)/2

   int total_sum = 0; // to add the elements of the array

    for(int i=0; i<11; i++)
    {
        total_sum+= a[i];
    }
    int duplicate = total_sum - sum;
    printf("THE DUPLICATE ELEMENT IS %d", duplicate);
}