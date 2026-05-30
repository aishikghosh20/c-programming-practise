#include <stdio.h>
int main()
{
    int n;
int marks[n];
printf("ENETR THE NO OF STUDENTS:\n");
scanf("%d", &n);

for (int i =0; i<n; i++)
{
    printf("ENTER THE MARKS OF STUDENT %d:", i+1);
    scanf("%d", &marks[i]);
}
for (int i = 0; i < n; i++)
{
    if (marks[i] < 35)
    {
        printf("%d\n", i+1);
    }
}
}