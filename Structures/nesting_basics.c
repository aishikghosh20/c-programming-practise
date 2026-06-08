#include <stdio.h>
#include <string.h>
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

       typedef struct legendarypokemon // user defined datatype
    {
        pmon normal; //attributes of struct pokemon is copied into this 
        int special_attack;
        int special_defense;
    } legend;

     typedef struct godpokemon // user defined datatype
    {
        legend legendtype; //attributes of struct legend is copied into this 
       char special_ability1[50];
       char special_ability2[50];
    } god;

    legend mewtwo; // has the attributes of structs - legendarypokemon & pokemon

    god arceus; // has the attributes of structs - godpokemon, legendarypokemon & pokemon


//                   FOR MEWTWO
    // to access the attributes of the struct 'legendarypokemon'
    mewtwo.special_attack =240;
    mewtwo.special_defense=120;

    // to access the attributes of the struct 'pokemon'
    mewtwo.normal.attack = 86;
    mewtwo.normal.hp = 100;
    mewtwo.normal.speed =146;
    mewtwo.normal.tier = 'S';
    strcpy( mewtwo.normal.name, "MEWTWO"); // to enter the name in a string-type datatype


//                   FOR ARCEUS
    // to access the attributes of the struct 'godpokemon'
    strcpy(arceus.special_ability1, "REALITY WARP");
    strcpy(arceus.special_ability2, "IMMORTALITY");

    // to access the attributes of the struct 'legendarypokemon'
    arceus.legendtype.special_attack =345;
    arceus.legendtype.special_defense =289;

   // to access the attributes of the struct 'pokemon'
    arceus.legendtype.normal.attack = 156;
    arceus.legendtype.normal.hp = 134;
    arceus.legendtype.normal.speed =189;
    arceus.legendtype.normal.tier = 'G';
    strcpy( arceus.legendtype.normal.name, "ARCEUS"); // to enter the name in a string-type datatype

  
    printf("\nPOKEMON NAME : %s \nATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c \nSPECIAL ATTACK: %d    SPECIAL DEFENSE: %d\n",mewtwo.normal.name, mewtwo.normal.attack, mewtwo.normal.speed, mewtwo.normal.hp, mewtwo.normal.tier, mewtwo.special_attack, mewtwo.special_defense);

    printf("\nPOKEMON NAME : %s \nATTTACK- %d    SPEED- %d    HEALTH- %d    TIER- %c \nSPECIAL ATTACK: %d    SPECIAL DEFENSE: %d\nSPECIAL ABILITY 1: %s    SPECIAL ABILITY 2: %s\n",arceus.legendtype.normal.name, arceus.legendtype.normal.attack, mewtwo.normal.speed, arceus.legendtype.normal.hp, arceus.legendtype.normal.tier, arceus.legendtype.special_attack, arceus.legendtype.special_defense, arceus.special_ability1, arceus.special_ability2);

return 0;
}