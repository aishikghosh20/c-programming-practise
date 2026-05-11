#include <stdio.h>
int main ()
{
  printf ("ENTER THE NUMBER OF TERMS YOU WANT:\n");
  int n;
  scanf("%d", &n);
  int m=0;
  for (int i=1; i<=n; i++)
  {
      if (i%2==0)
      {
          m=m-i;
      }
      else
        m=m+i;
  }

 printf ("THE SUM OF THE SEQUENCE IS: \n%d",m);
 return 0;
}
