#include <stdio.h>
#include <string.h>

typedef struct pokemon // defining  the datatype outside allows it to be recognised by all the functions
{
    int hp;
    int speed;
    int attack;
    char tier;  
 } pmon;

void change(pmon* x)
{
    (*x).hp = 100;
    x -> attack = 80;   // (*x).attributed  ==  x -> attribute
    x -> speed = 140;
    x -> tier = 'S';
    return;
}

int main ()
{
    pmon pikachu;
    pikachu.hp = 86;
    pikachu.attack =60;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("ATTRIBUTE ADDRESSES :  HEALTH- %p     ATTTACK- %p    SPEED- %p    TIER- %p\n", &pikachu.hp, &pikachu.attack, &pikachu.speed,  &pikachu.tier);
    printf("\n");

    // Using a pointer variable
    pmon* x = &pikachu;
    printf("ADDRESS STORED IN X :\n%p\n", x);

    if ((int*)x == &pikachu.hp) {printf("BOTH ARE EQUAL\n");}  // cast the pmon* 'x' into int*, to avoid any error while comparing two different pointer-types

    printf("\n");

    // The Initial Values of the attributes of pikachu    
    printf("ATTRIBUTES : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", pikachu.attack,pikachu.speed,pikachu.hp,pikachu.tier);

    // Changing the attributes using function
    change(&pikachu); // passing the address as areference
    
    printf("CHANGED ATTRIBUTES : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", pikachu.attack,pikachu.speed,pikachu.hp,pikachu.tier);

    return 0;
}