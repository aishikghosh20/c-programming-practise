#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define Maxusers 30
#define maxsize 100
typedef struct 
{
   char user_name[maxsize];
   char password[maxsize];
} database;

database usersbase[Maxusers]; // Creating an array of users( of struct-type), with a max size of 30
int users_count =0; 
void user_register();
int user_login(); 
void fixing_newline(char* string);
int user_exists(char* name , char* password);

int main()
{
    int choice;
    while(1)
    {
    printf("================================\n");
    printf("     USER MANAGEMENT SYSTEM\n");
    printf("================================\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("================================\n");
    printf("Enter your choice: \n");

    scanf("%d", &choice);
    while (getchar() != '\n'); // To remove previous leftover newline 

    switch(choice)
    {
        case 1 :
       {user_register();
        break;}

        case 2:
        {
        int index = user_login(); // returns the user's index (if present in the database)
        if (index >= 0)
        {
            printf("\033[1;32m\nLOGIN SUCCESSFULL \nWELCOME, %s!! \033[0m\n", usersbase[index].user_name);
            sleep(1);
        }
        else{
            printf("\033[1;31m\nLOGIN FAILED. INVALID USERNAME OR PASSWORD \033[0m\n\n");
            sleep(1);
        }
        break;
        }

        case 3:
        {
            printf("\033[1;33m\nEXITING PROGRAM\033[0m");
            sleep(1);
            printf("\n\nCODED BY : AISHIK GHOSH\n");  
            system("pause"); // pauses the Output Terminal in stead of closing it immediately after the code ends
            return 0;
            break;
        }

        default:
        {
            printf("\033[1;31m\nINVALID CHOICE. PLEASE TRY AGAIN \033[0m\n\n");
            sleep(1); // To sleep for 1 second
            break;
        }
    }
}
}

void user_register()
{
    if (users_count >=Maxusers)
    {
        printf("\033[1;33m\nWARNING : USER LIMIT REACHED!\033[0m\n\n");
        sleep(1);
     return;
    }

    printf("================================");
    printf("\033[1;36m\n      REGISTER A NEW USER \033[0m\n");
    printf("================================\n");
    
    printf("\033[1;36mENTER USER-NAME :  \033[0m");
    fgets(usersbase[users_count].user_name, sizeof(usersbase[users_count].user_name), stdin);
    fixing_newline(usersbase[users_count].user_name);

    printf("\033[1;36mENTER PASSWORD  :  \033[0m");
    fgets(usersbase[users_count].password, sizeof(usersbase[users_count].password), stdin);
    fixing_newline(usersbase[users_count].password);

    // To check validity of user credentials 
    if ((strlen(usersbase[users_count].user_name) == 0) || strlen(usersbase[users_count].password) == 0 || usersbase[users_count].password[0] == ' ' || usersbase[users_count].user_name[0] == ' '  )
    {
    printf("\033[1;31m\nINVALID USER-NAME OR PASSWORD! \033[0m\n\n");
    sleep(1);
    return;
    }

    int check = user_exists(usersbase[users_count].user_name, usersbase[users_count].password);
    if (check == 0)
    {
    users_count++;
    printf("\033[1;32m\nREGISTRATION SUCCESSFULL \033[0m\n\n");
    sleep(1);
    return;
    }
    else
    {
        printf("\033[1;31m\nUSER-NAME OR PASSWORD ALREADY EXISTS! \033[0m\n\n");
        sleep(1); // To sleep for 1 second        
        return;
    }
}

int user_login()
{
    printf("================================");
    printf("\033[1;36m\n            LOGIN \033[0m\n");
    printf("================================\n");
    
    char name[maxsize];
    char password[maxsize];
    
    printf("\033[1;36mENTER USER-NAME :  \033[0m");
    fgets(name, sizeof(name), stdin);
    fixing_newline(name);

    printf("\033[1;36mENTER PASSWORD :  \033[0m");
    fgets(password, sizeof(password), stdin);
    fixing_newline(password);

    // To check validity of login credentials 
    if ((strlen(name) == 0) || strlen(password) == 0 || password[0] == ' ' || name[0] == ' ' )
    {
    printf("\033[1;31m\nINVALID USER-NAME OR PASSWORD ENTERED! \033[0m\n");
    sleep(1);
    return -1;
    }
  
    // To check the login credentials
    for(int i=0; i< Maxusers; i++)
    {
        if ((strcmp(usersbase[i].user_name, name) == 0) && (strcmp(usersbase[i].password, password) == 0))
        {
            return i;
        }
    }
    return -1;
}

void fixing_newline(char* string)
{
 // To prevent the '\n' character to be present in the user-name
    int index = strcspn(string, "\n");
    string[index] = '\0';
    return;
}

int user_exists(char* name , char* password)
{
    for (int i=0; i<users_count; i++)
    {
        if ((strcmp(usersbase[i].user_name, name) == 0) || (strcmp(usersbase[i].password, password) == 0))
        {
            return 1;
        }
    }
    return 0;
}