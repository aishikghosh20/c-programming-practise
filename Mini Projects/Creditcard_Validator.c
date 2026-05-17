// Checks the validity of AMEX, VISA and MASTERCARDS

#include <stdio.h>
int main()
{
    printf("Please Enter Your Card Number\n");
    long long number; // to store the user's card number

    do
    {
        scanf("%lld", &number);

        if (number <= 0)
        {
            printf("Enter a valid number\n");
        }
    }
    while (number <= 0); // checks the validity of the user's input

    long long original = number; // to keep a copy of the card number
    int count = 0;          // To track the number of digits
    int sum = 0;            // To calculate the sum of the digits

    long long reverse = 0; // to store the reverse of the numbers

    while (original > 0)
    {
        count++; // increases by 1 for every iteration

        reverse = (reverse * 10) + (original % 10);
        original = original / 10; // removes the last digit after every iteration
    }

    while (number > 0)
    {

        sum = sum + (number % 10); // adds the last digit to the sum

        // Removes the last digit
        number = number / 10;

        // Stops if there are no more digits in the number
        if (number == 0)
        {
            break;
        }

        // Multiplies every second digit
        int n = (number % 10) * 2;

        while (n > 0)
        {
            sum = sum + (n % 10); // add the digits of the products
            n = n / 10;           // removes the digit after adding them to the sum
        }

        number = number / 10; // removes a digit from the new number after every iteration
    }

    int last_digit; // stores the last digit of the sum
    last_digit = sum % 10;

    // To check the validity of the card number
    if (last_digit != 0 || (count != 13 && count != 15 && count != 16))
    {
        printf("INVALID\n");
    }
    else
    {
        // To check the card type
        int reversed_first_two_digits =
            reverse % 100;        // to store the first two digits of the reverse number
        int first_two_digits = 0; // to store the actual first two digits of the number
        int first_digit = reversed_first_two_digits % 10; // stores the first digit of the number

        while (reversed_first_two_digits > 0)
        {
            first_two_digits = (first_two_digits * 10) + (reversed_first_two_digits % 10);
            reversed_first_two_digits /= 10; // removes a digit after each iteration
        }

        if (first_digit == 4 && (count == 13 || count == 16)) // checks for Visa cards
        {
            printf("VISA\n");
        }
        else if ((first_two_digits == 34 || first_two_digits == 37) &&
                 count == 15) // checks for all american express cards
        {
            printf("AMEX\n");
        }
        else if ((first_two_digits >= 51 && first_two_digits <= 55) &&
                 count == 16) // checks for mastercards
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    printf("\n\nCODED BY : AISHIK GHOSH\n");  
    system("pause"); // pauses the Output Terminal in stead of closing it immediately after the code ends
    return 0;
}
