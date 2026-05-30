#include <stdio.h>
int palindrome(int array[], int n)
{
    int i = 0;
    int j = n-1;
    int count = 0;
    while (i<j)
    {
        if (array[i] != array[j])
        {
            count = 1;
        }
        i++;
        j--;
    }
    return count;
}
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
    int check = palindrome(array,n);

    if(check == 0)
    {
        printf("IT IS A PALINDROME\n");
    }
    else
    {
        printf("NOT A PALINDROME");
    }
    return 0;
}