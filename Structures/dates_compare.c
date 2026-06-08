#include <stdio.h>
#include <stdbool.h>
int main()
{typedef struct date // user defined datatype
{
    int day;
    int month;
    int year;
} date;

date a,b;

// prompts user to enter the dates
printf("ENTER THE DETAILS OF DATE 1:\n");
printf("ENTER THE DATE\n");
scanf("%d", &a.day);
printf("ENTER THE MONTH\n");
scanf("%d", &a.month);
printf("ENTER THE YEAR\n");
scanf("%d", &a.year);
printf("\n");
printf("ENTER THE DETAILS OF DATE 2:\n");
printf("ENTER THE DATE\n");
scanf("%d", &b.day);
printf("ENTER THE MONTH\n");
scanf("%d", &b.month);
printf("ENTER THE YEAR\n");
scanf("%d", &b.year);

bool flag = true; // to check equality
if (a.day != b.day) flag = false;
else if (a.month != b.month) flag = false;
else if (a.year != b.year) flag = false;

if (flag ==true)
printf("THE DATES ARE SAME");
else
printf("THE DATES ARE DIFFERENT");

return 0;
}