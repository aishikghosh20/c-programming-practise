#include <stdio.h>
int main()
{
int a =41; /* since a>b, % yeilds the remainder as the answer*/
int b=6;
int r= a% b;
printf("the remainder is : %d", r);

//but if a< b, % wont give the remainder, in stead will return back 'a'

 a = 6;
 b = 19;
 r= a% b;
printf("\nthe remainder is : %d", r);

// and if we do a%0 ===> the compiler returns 'a' back or nothing at all

 a =6;
 b = 0;
 r= a% b;
printf("\nthe remainder is : %d", r);




return 0;
}
