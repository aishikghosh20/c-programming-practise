#include <stdio.h>
int main()
{struct pokemon // user defined datatype
{
    int hp;
    int speed;
    int attack;
    char tier;  // S>A>B>C>D
};

struct pokemon pikachu;
pikachu.attack =60;
pikachu.hp = 50;
pikachu.speed = 100;
pikachu.tier = 'A';


struct pokemon charizrd;
charizrd.attack =130;
charizrd.hp = 80;
charizrd.speed = 70;
charizrd.tier = 'S';

printf("PIKACHU : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", pikachu.attack,pikachu.speed,pikachu.hp,pikachu.tier);

return 0;
}