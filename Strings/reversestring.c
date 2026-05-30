#include <stdio.h>
#include <string.h>
int main ( )
{ 
    printf("ENTER A STRING\n");
    char a[100];
    gets(a); 
    
int size =strlen(a);
char b[size];
for (int j=size-1, i=0; i<size;j--, i++)
{
b[i] = a[j];
}

puts("THE STRING IN REVERSE IS:");
puts(b);
    return 0;
}