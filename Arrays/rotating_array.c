#include <stdio.h>
void rotate(int reverse[], int n)
{
    int key;
    printf("ENTER A KEY TO ROTATE:\n");
    scanf("%d", &key);

    key = (key%n); // for keys more than the array length

    
    for (int i = 0, j=key-1; i<j; i++)
    {
        int temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
        j--;
    }

    for(int i = key, j=n-1; i<j; i++)
    {
       int temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
        j--; 
    }
return;
}

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

    for(int i = n-1, j=0;i >=0; i--)
    {
        reverse[j] = array[i];
        j++;
    }    

    rotate(reverse,n);

    for(int i = 0; i < n; i++)
    {
    printf("%d ", reverse[i]);
    }
return 0;

}