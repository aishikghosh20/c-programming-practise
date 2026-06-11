#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getTime(char* buffer_time, char* buffer_date, char* day, size_t size, int  format_time, int  format_date);
int formattime_input();
int formatdate_input();
void screen_clear();


int main ()
{  
    int format_time = formattime_input();
    int format_date = formatdate_input();


    while(1) // To update the time continuously
    {
    // To get the current local time, date and weekday name
    char time[100];
    char date[100];
    char day[100]; 
    getTime(time, date, day, sizeof(time), format_time, format_date);

    // To clear the screen before printing
    screen_clear();
    
    // TO print the current local time
   printf("\n=====================================\n");
    printf("         DIGITAL CLOCK\n");
    printf("=====================================\n");
    printf(" Time : %s\n", time);
    printf(" Date : %s   DAY : %s\n", date, day);
    printf("=====================================\n");
    printf("\033[1;31m\n\nTO QUIT PRESS THE X BUTTON OR CTRL + 'C' \033[0m\n");


    sleep(1); // To sleep for 1 second
    }
    
    return 0;
}

void screen_clear()
{
    #ifdef _WIN32
    system("cls"); // Windows command prompt
    #else 
    system("clear"); // For other OS Systems
    #endif
}
int formattime_input()
{    
    // To get user's format preference
    printf("ENTER THE PREFERRED TIME FORMAT :\n");
    printf("1. 12-HR FORMAT (DEFAULT) \n2. 24-HR FORMAT \n");
    printf("PLEASE SELECT AN OPTION(1/2):\n");
    char option_time[100];
    fgets(option_time, sizeof(option_time), stdin);
    int format_time = atoi(option_time);

    printf("\n");

    if (format_time != 1 && format_time !=2)
    {
     printf("INVALIND NUMBER HAS BEEN ENTERED\n PROCEEDING WITH THE DEFAULT FORMAT\n\n");
    sleep(1);
    }

    return format_time;
}

int formatdate_input()
{
    printf("ENTER THE PREFERRED DATE FORMAT :\n");
    printf("1. DD-MM-YYYY (DEFAULT) \n2. YYYY-MM-DD \n");
    printf("PLEASE SELECT AN OPTION(1/2):\n");
    char option_date[100];
    fgets(option_date, sizeof(option_date), stdin);
    int format_date = atoi(option_date);

    printf("\n");

    if (format_date != 1 && format_date !=2)
    {
     printf("INVALIND NUMBER HAS BEEN ENTERED\n PROCEEDING WITH THE DEFAULT FORMAT\n\n");
      sleep(1);
    }

    return format_date;

}

void getTime(char* buffer_time, char* buffer_date, char* day, size_t size, int format_time, int format_date)
{
    struct tm* current; // defined in the <time.h> library

    // To get the system calender timee
    time_t rawtime;  
    time(&rawtime); 
   
    current = localtime(&rawtime);

    // To store the local time in chosen format
    if (format_time == 1)
   {
    strftime(buffer_time, size, "%I : %M : %S  %p", current); 
   } 
   else if (format_time == 2)
   {
    strftime(buffer_time, size, "%H : %M : %S", current); 
   } 
   else
   {
    strftime(buffer_time, size, "%I : %M : %S  %p", current); 
   }

    // To store the local date in chosen format
    if (format_date == 1)
   {
    strftime(buffer_date, size, "%d-%m-%Y", current); 
   } 
   else if (format_time == 2)
   {
    strftime(buffer_date, size, "%Y-%m-%d", current); 
   } 
   else
    {
    strftime(buffer_date, size, "%d-%m-%Y", current);
    }

    // To store the weekday's name
    strftime(day, size, "%A", current); 


    return;
}