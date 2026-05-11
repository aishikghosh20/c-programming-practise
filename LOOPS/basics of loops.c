#include <stdio.h>
int main()
{int x;
printf ("Enter the Number\n");
scanf("%d", &x);
for (int i=1; i<=x;i=i+1)
{
    printf("%d\n", i); //prints i
}
// printf("%d\n", i); //shows an error and cannot print i as i was declared inside the loop block
return 0;
}

