#include <stdio.h>
int main()
{
   
    typedef struct cricketer
    {
        char name[50];
        int age;
        int no_of_tests;
        float avg_marks;
    } record;

    printf("ENTER THE NUMBER OF CRICKETERS:\n");
    int n;
    scanf("%d", &n);

    while(getchar() != '\n'); // to consume leftover newline orelse next string input will skip

    record array[n]; 

    for (int i=0; i<n; i++)
    {
        printf("ENTER NAME OF CRICKETER %d\n", i+1);
        fgets(array[i].name, sizeof(array[i].name), stdin);     // OR   scanf("%[^\n]s", array[i].name);
        
        printf("ENTER THE AGE :\n");
        scanf("%d", &array[i].age);

        printf("ENTER THE NUMBER OF TEST MATCHES PLAYED :\n");
        scanf("%d", &array[i].no_of_tests);

        printf("ENTER THE AVGERAGE SCORE IN THE TEST MATCHES :\n");
        scanf("%f", &array[i].avg_marks);
        
        while(getchar() != '\n'); // needed the consume the leftover newline before the next loop or else the next string input is skipped

    }

    
    for (int i=0; i<n; i++)
    {
        printf("\nCRICKETER %d:\n NAME : %s \nAGE- %d    NUMBER OF TESTS- %d    AVERAGE SCORE- %f \n", i+1, array[i].name, array[i].age, array[i].no_of_tests, array[i].avg_marks);
    }

    return 0;
}