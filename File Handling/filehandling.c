#include<stdio.h>
#include<string.h>

int main()
{
    FILE* ptr = fopen("intro.txt", "r"); //opens this .txt file in read-only mode
    FILE* x = fopen("intro.txt", "r"); 

    //            Reading the file
    char str[100]; // to store the content of the file
    char ch[9];

   while( fgets(str,100,ptr) != NULL)
  { printf("%s", str);} // 'while' is used to print all the lines of the file

  printf("\n");

   if( fgets(ch,9,x)!= NULL)
  { printf("%s", ch);} // 'if' is used to print only one line of the file



  //  Creating a newfile
    FILE* new = fopen("Example.txt", "w"); //creates this .txt file in write-only mode

 //   To write in this file
    char line[] = "Hello!! How are you??";
    fputs(line, new);

    fclose(new); //closes the file corresponding to the pointer in it



    return 0;
}