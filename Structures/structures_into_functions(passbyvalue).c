#include <stdio.h>
#include <string.h>

typedef struct pokemon // defining  the datatype outside allows it to be recognised by all the functions
{
    int hp;
    int speed;
    int attack;
    char tier;  
 } pmon;


    
void func (pmon p)
{
printf("Pokemon : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", p.attack,p.speed,p.hp,p.tier);
return;
}

void change (pmon x)
{
    x.hp = 98;
    x.attack = 76;
    x.hp = 87;
    x.speed = 134;

}
int main ()
{
     
    pmon pikachu;
    pikachu.hp = 86;
    pikachu.attack =60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("Pokemon : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n\n", pikachu.attack,pikachu.speed,pikachu.hp,pikachu.tier);

    func(pikachu); // passing the mewtwo variable

    printf("\n");

    // Changing the attributes
    change(pikachu);

    printf("Pokemon : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n\n", pikachu.attack,pikachu.speed,pikachu.hp,pikachu.tier);  // Changes were'nt reflected in the original attributes as the variable was passed by value
    
    return 0;
}