#include <stdio.h>
int main()
{
int n;
printf("ENTER THE NO OF LINES :\n");
scanf("%d", &n);

int number_of_spaces = n/2;
int number_of_stars = 1;
int middle_line = n/2 +1;
for(int i=1; i<=n; i++)
{

    for (int k=1; k<= number_of_spaces; k++)
{
    printf(" ");
}

for (int j=1; j<=number_of_stars; j++ )
{
printf("*");
}


if(i < middle_line) //till the middle line
{
   number_of_spaces--;
   number_of_stars+=2;
}
else
{
    number_of_spaces++;
    number_of_stars-=2;
}


printf("\n");
}
return 0;
} 