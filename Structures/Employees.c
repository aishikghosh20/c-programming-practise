#include <stdio.h>
#include <string.h>
int main()
{struct employee // user defined datatype
{
    int age;
   float salary;
    char name[100];  // creating a char array of a large size just in case
} emp_1, emp_2;

printf("ENTER THE NAME OF EMPLOYEE 1:\n");
fgets(emp_1.name, sizeof(emp_1.name), stdin);

printf("ENTER THE NAME OF EMPLOYEE 2:\n");
fgets(emp_2.name, sizeof(emp_2.name), stdin);

printf("ENTER THE SALARY OF EMPLOYEE 1:\n");
scanf("%f", &emp_1.salary);

printf("ENTER THE SALARY OF EMPLOYEE 2:\n");
scanf("%f", &emp_2.salary);

printf("ENTER THE AGE OF EMPLOYEE 1:\n");
scanf("%d", &emp_1.age);

printf("ENTER THE AGE OF EMPLOYEE 2:\n");
scanf("%d", &emp_2.age);


printf("EMPLOYEE 1 : \nNAME- %s  SALARY- %.3f  AGE- %d\n\n", emp_1.name, emp_1.salary, emp_1.age);
printf("EMPLOYEE 2 : \nNAME- %s  SALARY- %.3f  AGE- %d\n", emp_2.name, emp_2.salary, emp_2.age);

return 0;
}
