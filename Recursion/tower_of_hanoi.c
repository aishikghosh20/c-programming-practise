//  Pathways for minimum moves

/*                      Examples:    
if ->         n=2                           n=3
Output: 2 1 1 1 2 1 1 1 2         3 2 1 1 1 2 3 2 1 1 1 2 3
 */

#include <stdio.h>
void tower(int n, char source, char helper, char destination)
{
    if (n==0) return;
    // calling for the (n-1 triangle) to move to the helper rod
    tower( n-1, source, destination,  helper);

    // moving the last block of the previous triangle from source to destination rod
    printf("%c -> %c\n", source, destination);
    
    // calling for the (n-1 triangle) of the new triangle
    tower(n-1, helper, source, destination);

    return;    
}
int main()
{
    int n;
    printf ("ENTER THE NUMBER OF DISKS :\n");
    scanf ("%d", &n);

    printf("THE PATHWAY TO SOLVE IN MINIMUM NUMBER OF MOVES:\n ");
    tower(n, 'A', 'B', 'C');
  return 0; 
}