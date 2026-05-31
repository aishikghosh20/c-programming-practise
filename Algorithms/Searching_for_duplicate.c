#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NO OF ELEMENTS:\n");
    scanf("%d", &n);
    int a[n];
    
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                printf("The Duplicate element is: %d", a[i]);
                return 0;
            }
        }
    }
printf("NO SUCH DUPLICATE ELEMENT IN THE ARRAY");
return 0;

}