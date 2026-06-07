#include <stdio.h>
#include <string.h>
int main()
{struct book // user defined datatype
{
    int noofpages;
   float price;;
    char name[100];  // creating a char array of a large size just in case
} a, b, c;

printf("ENTER THE NAME OF BOOK 1:\n");
fgets(a.name, sizeof(a.name), stdin);

printf("ENTER THE NUMBER OF PAGES IN BOOK 1:\n");
scanf("%d", &a.noofpages);


printf("ENTER THE PRICE OF BOOK 1:\n");
scanf("%f", &a.price);

printf("BOOK 1 : NAME- %s PRICE- %.3f   NUMBER OF PAGES- %d\n", a.name, a.price, a.noofpages);

return 0;
}