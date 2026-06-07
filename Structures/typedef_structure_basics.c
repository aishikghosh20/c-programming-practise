#include <stdio.h>
#include <string.h>
int main()
{  typedef struct book // user defined datatype
{
    int noofpages;
   float price;;
    char name[100];  // creating a char array of a large size just in case
} book; // new name for the datatype - struct book

// declaring variables
book a, b; // "book" will have the same function as the 'struct book'  - makes the declaring process easier

printf("ENTER THE NAME OF BOOK 1:\n");
fgets(a.name, sizeof(a.name), stdin);

printf("ENTER THE NUMBER OF PAGES IN BOOK 1:\n");
scanf("%d", &a.noofpages);

printf("ENTER THE PRICE OF BOOK 1:\n");
scanf("%f", &a.price); 

while (getchar() !='\n'); // clears the input buffer caused by the leftover newline from the scanfs which will cause the next fget to skip the input 

printf("ENTER THE NAME OF BOOK 2:\n");
fgets(b.name, sizeof(b.name), stdin);

printf("ENTER THE NUMBER OF PAGES IN BOOK 2:\n");
scanf("%d", &b.noofpages);

printf("ENTER THE PRICE OF BOOK 2:\n");
scanf("%f", &b.price);

printf("BOOK 1 : NAME- %s PRICE- %.3f  NUMBER OF PAGES- %d\n", a.name, a.price, a.noofpages);
printf("BOOK 2 : NAME- %s PRICE- %.3f  NUMBER OF PAGES- %d\n", b.name, b.price, b.noofpages);

return 0;
}