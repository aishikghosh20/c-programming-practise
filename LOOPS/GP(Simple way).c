#include <stdio.h>
int main()
{
int x,y,z;
printf("ENTER THE 1ST NUMBER:\n");
scanf("%d", &x);
printf("ENTER THE 2ND NUMBER:\n");
scanf("%d", &y);
printf("ENTER THE 3RD NUMBER:\n");
scanf("%d", &z);

int d1 = y/x;
int d2 = z/y;

if (d1==d2)
{
printf ("THE NUMBERS ARE IN AN AP WITH A COMMON RATIO OF %d\n",d1);
int n;
printf ("ENTER HOW MANY NUMBERS YOU WANT THE AP TO HAVE :");
scanf("%d", &n);
printf("\nTHE AP IS :\n");

// MAIN LINE OF CODE
 int a=1;
  for (int i=1; i<=n;i=i+1)
     {
      if (i==n)
      printf("%d    <======= THIS THE LAST NUMBER OF THE GP\n", a);
      else
        printf("%d \n", a);

       a=a*d1;
     }
}
else
    printf("THESE NUMBERS DO NOT BELONG IN AN AP");

return 0;
}
