#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#define maxsize 100
typedef struct 
{
   char user_name[maxsize];
   int accNo;
   float bal;
} database;


void create_account();
void deposit();
void withdraw();
void transfer();
void check_balance();
void fixing_newline(char* string);
int account_exists(int account_number);

int main ()
{
    int choice;
    while (1)
    {    
        printf("\033[1;34m");
        printf("==================================================\n");
        printf("            BANK MANAGEMENT SYSTEM\n");
        printf("==================================================\n");
        printf("\033[0m");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transfer Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("==================================================\n");
        printf("Enter Your Choice: \n");
        // Preventing users from misinput
        if (scanf("%d", &choice) != 1) // scanf() returns 1 after a successful input 
        {
            printf("\033[1;31m\nINVALID CHOICE. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            sleep(1); // To sleep for 1 second
            continue;;
        }
         while (getchar() != '\n'); // To remove leftover newline

        switch(choice)
    {
        case 1 :
        {
        create_account();
        break;
        }

        case 2:
        {
        deposit();
        break;
        }
        
        case 3:
        {
           withdraw();
            break;
        }

        case 4:
        {
            transfer();
            break;
        }

        case 5:
        {
         check_balance(); 
            break;
        }

        case 6:
        {
            printf("\033[1;33m\nEXITING BANK\n!!THANK YOU FOR YOUR VISIT!!\033[0m");
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

void create_account()
{
    database acc;

    // To open the database file 
    FILE* file = fopen("account.txt", "ab+");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return;
    }

    printf("================================");
    printf("\033[1;36m\n      REGISTER A NEW ACCOUNT \033[0m\n");
    printf("================================\n"); 

    printf("\033[1;36mENTER USER-NAME :   \033[0m");
    fgets(acc.user_name, sizeof(acc.user_name), stdin);
    fixing_newline(acc.user_name);

    printf("\033[1;36mENTER ACCONUT NUMBER  :  \033[0m");
    //To prevent misinput
    if (scanf("%d", &acc.accNo) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of user credentials 
    if ((strlen(acc.user_name) == 0) || acc.accNo <= 0 || acc.user_name[0] == ' ')
    {
    printf("\033[1;31m\nINVALID USER-NAME OR ACCOUNT NUMBER! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To Check is account already exists
    int flag = account_exists(acc.accNo);
    if(flag == 1)
    {
        printf("\033[1;33m\nACCOUNT NUMBER ALREADY EXISTS\033[0m\n");
        fclose(file);
        sleep(1);
        return;
    }

    acc.bal = 0;
    fwrite(&acc, sizeof(acc), 1, file); // TO add the new account to the database file
    fclose(file);
    printf("\033[1;32m\nACCOUNT CREATION WAS SUCCESSFULL \033[0m\n\n");
    sleep(1);
    return;
}

int account_exists(int account_number)
{
    FILE* file = fopen("account.txt", "rb");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return -1;
    }

    database acc;

    while(fread(&acc, sizeof(acc), 1, file))
    {
        if (acc.accNo == account_number)
        {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}

void deposit()
{
    database acc;

    // To open the database file 
    FILE* file = fopen("account.txt", "rb+");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return;
    }

    int account_no;

    printf("================================");
    printf("\033[1;36m\n          DEPOSIT \033[0m\n");
    printf("================================\n"); 

    printf("\033[1;36mENTER ACCONUT NUMBER  :  \033[0m");
    //To prevent misinput
    if (scanf("%d", &account_no) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of user input 
    if (account_no <= 0)
    {
    printf("\033[1;31m\nINVALID USER CREDENTIALS ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To get the deposit amount
    float amount;
    printf("\033[1;36mENTER THE AMOUNT TO DEPOSIT  :  \033[0m");
   //To prevent misinput
    if (scanf("%f", &amount) != 1) 
        {
            printf("\033[1;31m\nINVALID AMOUNT ENTERED \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of the entered amount
    if (amount<=0)
    {
    printf("\033[1;31m\nINVALID AMOUNT ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To update the account balance
    while(fread(&acc, sizeof(acc), 1, file)) // loops till the end-of-file(EOF)
    {
        if (acc.accNo == account_no)
        {
            fseek(file, -((long)sizeof(acc)), SEEK_CUR); // Moves the cursor back to the position of the account number 
            acc.bal += amount;
            fwrite(&acc, sizeof(acc), 1, file);
            printf("\033[1;32m\nAMOUNT OF Rs.%.3f SUCCESSFULLY DEPOSITED \nACCOUNT BALANCE WAS UPDATED\033[0m\n", amount);
            sleep(1);
            printf("\033[1;36m\nNEW BALANCE:   \033[0m\n");
            printf("%.3f\n", acc.bal);
            sleep(1);
            fclose(file);
            return ;
        }
    }
    
    fclose(file);
    printf("\033[1;33m\nACCOUNT NUMBER DOES NOT EXIST\033[0m\n");
    printf("\033[1;31mDEPOSITION UNSUCCESSFUL\033[0m\n");
    sleep(1);
    return;
}

void withdraw()
{
    database acc;

    // To open the database file 
    FILE* file = fopen("account.txt", "rb+");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return;
    }

    int account_no;

    printf("================================");
    printf("\033[1;36m\n          WITHDRAW \033[0m\n");
    printf("================================\n"); 

    printf("\033[1;36mENTER ACCONUT NUMBER  :  \033[0m");
   //To prevent misinput
    if (scanf("%d", &account_no) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of user input 
    if (account_no <= 0)
    {
    printf("\033[1;31m\nINVALID USER CREDENTIALS ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To get the withdrawl amount
    float amount;
    printf("\033[1;36mENTER THE AMOUNT TO WITHDRAW  :  \033[0m");
    //To prevent misinput
    if (scanf("%f", &amount) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of the entered amount
    if (amount<=0)
    {
    printf("\033[1;31m\nINVALID AMOUNT ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To update the account balance
    while(fread(&acc, sizeof(acc), 1, file)) // loops till the end-of-file(EOF)
    {
        if (acc.accNo == account_no)
        {
         // To check the possibility of withdrawl from account
         if(amount > acc.bal)
         {
            printf("\033[1;31m\nNOT ENOUGH BALANCE\033[0m\n");
            printf("\033[1;31mWITHDRAWL UNSUCCESSFUL\033[0m\n");
            fclose(file);
            sleep(1);
            return;
         }
         else
         {
            fseek(file, -((long)sizeof(acc)), SEEK_CUR); // Moves the cursor back to the position of the account number 
            acc.bal -= amount;
            fwrite(&acc, sizeof(acc), 1, file);
            printf("\033[1;32m\nAMOUNT OF Rs.%.3f SUCCESSFULLY WITHDRAWN \nACCOUNT BALANCE WAS UPDATED\033[0m\n", amount);
            sleep(1);
            printf("\033[1;36mNEW BALANCE:   \033[0m\n");
            printf("%.3f\n", acc.bal);
            sleep(1);
            fclose(file);
            return ;
         }
        }
    }
    
    fclose(file);
    printf("\033[1;33m\nACCOUNT NUMBER DOES NOT EXIST\033[0m\n");
    printf("\033[1;31mWITHDRAWL UNSUCCESSFUL\033[0m\n");
    sleep(1);
    return;
}

void transfer()
{
    database acc;

    // To open the database file 
    FILE* file = fopen("account.txt", "rb+");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return;
    }

    int account_no1, account_no2;

    printf("================================");
    printf("\033[1;36m\n          TRANSFER \033[0m\n");
    printf("================================\n"); 

    printf("\033[1;36mENTER YOUR ACCONUT NUMBER  :  \033[0m");
   //To prevent misinput
    if (scanf("%d", &account_no1) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    printf("\033[1;36mENTER RECIPIENT ACCONUT NUMBER  :  \033[0m");
    //To prevent misinput
    if (scanf("%d", &account_no2) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline


    // To check validity of user input 
    if (account_no1 <= 0 || account_no2 <= 0)
    {
    printf("\033[1;31m\nINVALID CREDENTIALS ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    //To check the existance of the accounts
    int flag1 = account_exists(account_no2);
    int flag2 = account_exists(account_no1);
    if(flag1 == -1 || flag2 == -1)
    {
    printf("\033[1;33m\nDATABASE ERROR\033[0m\n");
    fclose(file);
    sleep(1);
    return;
    }
    else if(flag1 != 1)
    {
    fclose(file);
    printf("\033[1;33m\nRECIPIENT ACCOUNT NUMBER DOES NOT EXIST\033[0m\n");
    printf("\033[1;31mTRANSFER UNSUCCESSFUL\033[0m\n");
    sleep(1);
    return;
    }
    else if (flag2 != 1)
    {
    fclose(file);
    printf("\033[1;33m\nSENDER ACCOUNT NUMBER DOES NOT EXIST\033[0m\n");
    printf("\033[1;31mTRANSFER UNSUCCESSFUL\033[0m\n");
    sleep(1);
    return;
    }
    else if (account_no1 == account_no2)
    {
        fclose(file);
        printf("\033[1;33m\nCANNOT TRANSFER TO THE SAME ACCOUNT\033[0m\n");
        printf("\033[1;31mTRANSFER UNSUCCESSFUL\033[0m\n");
        sleep(1);
        return;
    }
    else
    {
        printf("\033[1;32m\nCREDENTIALS ENTERED SUCCESSFULLY\033[0m\n");
    }

    // To get the tranfer amount
    float amount;
    printf("\033[1;36mENTER THE AMOUNT TO TRANSFER  :  \033[0m");
    //To prevent misinput
    if (scanf("%f", &amount) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of the entered amount
    if (amount<=0)
    {
    printf("\033[1;31m\nINVALID AMOUNT ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    // To update the account balance
    while(fread(&acc, sizeof(acc), 1, file)) // loops till the end-of-file(EOF)
    {
        if (acc.accNo == account_no1)
        {
         // To check the possibility of withdrawl from account
         if(amount > acc.bal)
         {
            printf("\033[1;31m\nNOT ENOUGH BALANCE\033[0m\n");
            printf("\033[1;31mTRANSFER UNSUCCESSFUL\033[0m\n");
            fclose(file);
            sleep(1);
            return;
         }
         else
         {  fseek(file, -((long)sizeof(acc)), SEEK_CUR); // Moves the cursor back to the position of the account number 
            acc.bal -= amount;
            fwrite(&acc, sizeof(acc), 1, file);
        }
        }
    }

    fseek(file, 0, SEEK_SET); // sets the cursor back to the start of the file

    while(fread(&acc, sizeof(acc), 1, file)) // loops till the end-of-file(EOF)
    {
        if (acc.accNo == account_no2)
        {
            fseek(file, -((long)sizeof(acc)), SEEK_CUR); // Moves the cursor back to the position of the account number 
            acc.bal += amount;
            fwrite(&acc, sizeof(acc), 1, file);
            printf("\033[1;32m\nAMOUNT OF Rs.%.3f SUCCESSFULLY TRANSFERRED \nACCOUNT BALANCE WAS UPDATED\033[0m\n", amount);
            sleep(1);
            printf("\033[1;36mNEW BALANCE:   \033[0m\n");
            printf("%.3f\n", acc.bal);
            sleep(1);
            fclose(file);
            return ;
        }
    }
    
    fclose(file);
    printf("\033[1;33m\nUNEXPECTED ERROR DURING TRANSFER\033[0m\n");
    sleep(1);
    return;
}

void check_balance()
{
    database acc;

    // To open the database file 
    FILE* file = fopen("account.txt", "rb");
    if (file == NULL)
    {
        printf ("\033[1;31m\nUNABLE TO OPEN THE FILE! ! \033[0m\n\n");
        return;
    }

    int account_number;

    printf("================================");
    printf("\033[1;36m\n      CHECKING BALANCE \033[0m\n");
    printf("================================\n"); 

    printf("\033[1;36mENTER ACCONUT NUMBER  :  \033[0m");
    //To prevent misinput
    if (scanf("%d", &account_number) != 1) 
        {
            printf("\033[1;31m\nINVALID CREDENTIAL ENETERED. PLEASE TRY AGAIN \033[0m\n\n");
            while (getchar() != '\n'); // To remove leftover newline
            fclose(file);
            sleep(1); // To sleep for 1 second
            return;
        }
     while (getchar() != '\n'); // To remove leftover newline

    // To check validity of user input
    if ( account_number <= 0 )
    {
    printf("\033[1;31m\nINVALID CREDENTIALS ENTERED! \033[0m\n\n");
    fclose(file);
    sleep(1);
    return;
    }

    while(fread(&acc, sizeof(acc), 1, file))
    {
        if (acc.accNo == account_number)
        {
            printf("\033[1;36m\nACCOUNT BALANCE:   \033[0m\n");
            printf("%.3f\n", acc.bal);
            sleep(1);
            fclose(file);
            return ;
        }
    }
  
    printf("\033[1;33m\nACCOUNT NUMBER DOES NOT EXIST\033[0m\n");
    sleep(1);
    fclose(file);
    return ;           
}

void fixing_newline(char* string)
{
 // To prevent the '\n' character to be present in the user-name
    int index = strcspn(string, "\n");
    string[index] = '\0';
    return;
}
