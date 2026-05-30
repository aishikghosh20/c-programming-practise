#include<stdio.h>
void func(int array[])
{
array[0] = 10;
return;
}
int main()
{
    int array[5] = {1,2,3,4,5};
    func(array);
      
}