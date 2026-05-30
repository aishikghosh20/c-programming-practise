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
// for the max element
   int max = array[0];
   for(int j = 0; j<n; j++)
   {
    if(array[j] > max)
    max = array[j];
    else
    continue;
   }

// for the second largest element
int smax = array[0];
for(int j = 0; j<n; j++)
   {
    if(array[j] != max && array[j] > smax)
    smax = array[j];
    else
    continue;
   }
   printf("Max: %d\nSecond Max: %d", max, smax);

  return 0;
}

/* This can be done in a single loop
buy first storing the previous max to smax
and then stroing new element in the max */
 
/*int max = INT_MIN;
int smax = INT_MIN;// for better ca
for ( i = 0 to n-1;)
{
if (array[i] > max)
{
smax = max;      //stores the previous max 
max= array[i];   // max becomes the new element
}
else if (smax < array[i] && arry[i] != max)
smax= array[i]; 

}
*/
