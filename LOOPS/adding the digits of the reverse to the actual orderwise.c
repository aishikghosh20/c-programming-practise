#include <stdio.h>
int main ()
{
int n;
printf ("ENTER A NUMBER\n");
scanf ("%d%", &n);
int m;
int x=n;// needed as the n becomes 0 after the 1st loop, and the 2nd loop wont work so x isw needed to store a copy of the number,
int r=0;
while (n!=0)
{
    m=(n%10);
    r=r*10;
    r=r+(m);
    n=n/10;
}
printf ("THE REVERSED NUMBER IS:\n%d", r);

int k;
int j;
int l=0;
while (x!=0 && r!=0)
{
    k=(x%10);
    j=(r%10);
    l=l*10;
    l=l+(j+k);
    x=x/10;
    r=r/10;
}
printf ("\nTHE Sum IS:\n%d", l);


return 0;
}
