#include <stdio.h>
int main ()
{
    typedef struct pokemon // user defined datatype
    {
        int hp;
        int speed;
        int attack;
        char tier;  
        char name[50];
    } pmon;

    printf("ENTER THE NUMBER OF POKEMONS:\n");
    int n;
    scanf("%d", &n);

    while(getchar() != '\n'); // to consume leftover newline orelse next input will skip

    // To declare a large no of variables of 'pmon' datatype --> arrays used
    pmon array[n];  // each element of this array is a variable of 'pmon' datatype

    for (int i =0; i<n; i++) // to access each element and enter the value of the attributes of that element
    {
        printf("ENTER NAME OF POKEMON %d\n", i+1);
        fgets(array[i].name, sizeof(array[i].name), stdin);
        
        printf("ENTER THE HEALTH :\n");
        scanf("%d", &array[i].hp);

        printf("ENTER THE SPEED :\n");
        scanf("%d", &array[i].speed);

        printf("ENTER THE ATTACK :\n");
        scanf("%d", &array[i].attack);

        printf("ENTER THE TIER :\n");
        scanf("%c", &array[i].tier);

        while(getchar() != '\n'); // needed the consume the leftover newline before the next loop
    }

    for (int i = 0; i < n; i++) // to print individual pokemons
    {
    printf("\nPOKEMON %d: NAME : %s \nATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", i+1, array[i].name, array[i].attack, array[i].speed, array[i].hp, array[i].tier);
    }
    
    return 0;
}