#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    printf("!!WELCOME TO THE GUESSING GAME!!\n");

    srand(time(0)); /* generate a random number wrt a seed
                   Time has been set as the seed , as it is always changing,
                   so the function will generate a new number every time. */

// Now to set the range of the random fuction



    int repetition =1; // to check whether user wants to replay the game

    while ( repetition !=0 )
    {
        int num = rand() % (100 -50 +1) +50;
        /* (100- 50 +1) yeilds 51,
        when dividing the random number with 51 gives a remainder within the range of (0 to 50)
        then after adding 50, the range increases to 50 to 100 */

        int guess_count =0;

          printf("\nGUESS A NUMBER FROM 50 TO 100\n");

        while ( guess_count >= 0)
        {
          
            int i;
            scanf("%d", &i);

            if ( i == num )
            { 
                guess_count++; 
                if (guess_count == 1)
                {printf ("\nYOU HAVE GUESSED THE NUMBER IN THE 1ST ATTEMPT");}
                else
               { printf("\nYOU HAVE CORRECTLY GUESSED THE NUMBER IN %d ATTEMPTS\n", guess_count); }
               
               printf("!!CONGRATULATIONS!!\n");
                break;
            }
            else if ( i > num )
            {   printf("GUESS A NUMBER SMALLER THAN THIS");
                guess_count++;
            }
            else
            {   printf("GUESS A NUMBER BIGGER THAN THIS");
                guess_count++;
            }
            printf("\n");
        }

        printf ("\nYOUR RANK IS:\n");
        if ( guess_count <=5 )
            printf("S RANK\n");
        else if ( guess_count >= 6 && guess_count <= 10)
            printf("A RANK\n");
        else if (guess_count >10 && guess_count <=20)
            printf("B RANK\n");
        else if ( guess_count >20 && guess_count <= 35)
            printf("C RANK\n");
        else
            printf("D RANK\n");


     printf("\nDO YOU WANT TO PLAY AGAIN?\n");
     int n;
     // a do-while loop is needed to repeat the input till the user enters a valid number
      do{
        printf("IF YES PRESS 1");
        printf("\nIF NO PRESS 2\n");
     
        scanf("%d", &n);
        if (n!=2 || n!=1)
        { printf("ENTER A VALID INPUT\n");}

    } while (n!=1 && n!=2);

 if (n==2)
        { 
            break;
        }
        else if (n==1)
        {
            repetition++;
        }
    
}


if (repetition ==1)
printf("\n\nYOU HAVE PLAYED THE GAME 1 TIME");
else
printf("\n\nYOU HAVE PLAYED THE GAME %d TIMES", repetition);

printf("\nTHANK YOU FOR PLAYING");  
printf("\n\nCODED BY : AISHIK GHOSH\n");  
system("pause"); // pauses the Output Terminal in stead of closing it immediately after the code ends
    return 0;
}