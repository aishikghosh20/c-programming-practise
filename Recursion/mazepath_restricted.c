//                           Person can only go down or right

#include <stdio.h>
int ways( int current_row, int current_column, int ending_row, int ending_column)
{
    int totalways_right = 0;
    int totalways_down = 0;

    // Base cases
    if (current_row==ending_row && current_column==ending_column) 
    return 1;
    else if (current_row==ending_row) // can only go right
   {
    totalways_right += ways(current_row, current_column +1, ending_row, ending_column);
   }
   else if (current_column==ending_column) // can only go down
   {
    totalways_down += ways(current_row +1, current_column, ending_row, ending_column);
   }
   else if (current_row < ending_row && current_column < ending_column) // can go both ways
   {
    totalways_right += ways(current_row, current_column +1, ending_row, ending_column);     
    totalways_down += ways(current_row +1, current_column, ending_row, ending_column);
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
    
    int noofways = ways(1, 1, n, m);// starts at (1,1) and ends at (n,m)
    
    printf("The total no of ways are : \n%d",noofways);
return 0;
}