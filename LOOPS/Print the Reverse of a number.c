#include <stdio.h>
int main ()
{
int n;
printf ("ENTER A NUMBER\n");
scanf ("%d%", &n);
int m;
int r=0;
while (n!=0)
{
    m=(n%10);
    r=r*10;
    r=r+(m);
    n=n/10;
}
printf ("THE REVERSED NUMBER IS:\n%d", r);

return 0;
}
