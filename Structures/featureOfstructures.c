#include <stdio.h>
int main()
{typedef struct pokemon // user defined datatype
{
    int hp;
    int speed;
    int attack;
    char tier;  
}pmon;

pmon a,b,c;
a.speed =120;
a.attack =86;
a.hp =96;
a.tier = 'A';

// b.speed= a.speed ;
// b.attack = a.attack ;
// b.hp= a.hp ;
// b.tier = a.tier;

b= a; ///thee attributes of 'a' is copied into 'b'

printf("Pokemon A : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", a.attack,a.speed,a.hp,a.tier);
printf("Pokemon B : ATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c\n", b.attack,b.speed,b.hp,b.tier);
printf("\n");

// This copy created in 'b' is a deep-copy
b.attack = 256;
printf("Pokemon A : ATTTACK- %d \n", a.attack);
printf("Pokemon B : ATTTACK- %d \n", b.attack);


return 0;
}