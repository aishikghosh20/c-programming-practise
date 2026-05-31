 #include <stdio.h>
 #include <stdbool.h>
 int main()
 {
    int a[] ={1,2,3,4,5,8,9,10};
    int target;
    printf("TARGET=\n");
    scanf("%d", &target);
    
    int i=0,j=7;
    bool check =false;

    while (i<j)
    {
        if((a[i]+a[j]) == target)
        {
            printf("target is achieved by elements (%d,%d) at indices (%d,%d)\n", a[i], a[j], i,j);
            check =true;
         break;
        }
        else if ((a[i]+a[j])>target)
        {j--;}
        else {i++;}
    }
    if(check == false)
    printf("NO SUCH PAIRS FOUND TO GET THE TARGET");
    return 0;
 }