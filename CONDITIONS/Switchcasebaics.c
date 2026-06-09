#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE DAY NUMBER:\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1: 
    printf("MONDAY\n"); 
     break;  // stops the switch if condition is met
    case 2:
    printf("TUESDAY\n");       
     break;
    case 3: printf("WEDNESDAY\n");       
     break;
    case 4: printf("THURDAY\n");       
     break;
    case 5: printf("FRIDAY\n");     
    break;  
    case 6: printf("SATURDAY\n");  
    break;     
    case 7: printf("SUNDAY\n");  
    break;

    default: printf("INVALID INPUT");
    }


    return 0;
}