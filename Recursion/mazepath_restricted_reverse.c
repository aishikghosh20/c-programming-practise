//                           Person can only go down or right

#include <stdio.h>
int ways( int current_row, int current_column)
{
    int totalways_right = 0;
    int totalways_down = 0;

    // Base cases
    if (current_row==1 && current_column==1) 
    return 1;
    else if (current_row==1) // can only go right
   {
    totalways_right += ways(current_row, current_column -1);
   }
   else if (current_column==1) // can only go down
   {
    totalways_down += ways(current_row -1, current_column);
   }
   else if (current_row > 1 && current_column >1) // can go both ways
   {
    totalways_right += ways(current_row, current_column -1);     
    totalways_down += ways(current_row -1, current_column);
   }

    int totalways= totalways_right + totalways_down;
    return totalways;

}
int main()
{
    int n;
    printf ("ENTER THE NUMBER OF ROWS\n");
    scanf ("%d", &n);

    int m;
    printf ("ENTER THE NUMBER OF COLUMNS\n");
    scanf ("%d", &m);
    
    int noofways = ways(n, m);// starts at (n,m) and ends at (1,1)
    
    printf("The total no of ways are : \n%d",noofways);
return 0;
}