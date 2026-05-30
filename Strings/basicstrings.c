#include <stdio.h>
#include <string.h>
int main ( )
{ 
    char c[5] = {'h','e','l','l','o'};
    for(int i=0;i<5;i++)
    {
        printf("%c", c[i]);
    }

    printf("\n");
    
    char a[] ="hello!";
   for(int i=0; a[i] != '\0';i++)
    {
        printf("%c", a[i]);
    }
    
    printf("\n");

    printf("ENTER A STRING\n");
    char b[100];
    scanf("%s", b); // only the first word is considered
    printf("%s", b);

    printf("\n");

    printf("ENTER A STRING\n");
    char d[100];
    gets(d); // the entire sentence is considered alongwith spaces
    puts(d);

    //can also be done by scanf("%[^\n]s",d)


    return 0;
}