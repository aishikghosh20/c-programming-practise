#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x; // points to the value stored in the address inside x
    *x = *y; // the value inside th address of 'a' changes to the value inside the address of 'b'
    *y = temp; // value inside the address of 'b' changes to the the value which was originally stored inside the address of 'a'
    return;
}
int main()
{
    int a;
    printf("ENTER 1st N0:\n");
    scanf("%d", &a);
    int b;
    printf("ENTER 2nd no:\n");
    scanf("%d", &b);
    // To store the addresses of the two numbers
    int* x = &a;
    int* y = &b;
    swap(x,y); // or swap(&a,&b)
    printf("a= %d\n b= %d", a,b);
    return 0;
} 