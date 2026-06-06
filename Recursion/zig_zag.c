/*                      Examples:    
if ->         n=2                           n=3
Output: 2 1 1 1 2 1 1 1 2         3 2 1 1 1 2 3 2 1 1 1 2 3
 */

#include <stdio.h>
void zigzag(int n)
{
    if (n==0) return;
    printf("%d ", n);
    zigzag(n-1);

    printf("%d ", n);
    zigzag(n-1);

    printf("%d ", n);
    return;    
}
int main()
{
    int n;
    printf ("ENTER A NUMBER\n");
    scanf ("%d", &n);

    zigzag(n);
  return 0; 
}