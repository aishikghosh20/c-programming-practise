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
   int reverse[n];
   int k = n-1;
   for(int j = 0; j<n; j++)
   {
       reverse[j] = array[k];
       k--;  
   }
   printf("ACTUAL:   REVERSE: \n");
   for(int j = 0; j<n; j++)
   {
      printf("   %d         %d\n", array[j],reverse[j]);
   
    return 0; 
}
