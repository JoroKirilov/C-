#ifndef DEATHKNIGHT_H
#define DEATHKNIGHT_H
#ifndef HERO_H_
#include "Hero.h"
#endif



typedef struct DeathKnight{
    Hero instance;
    void(*basic_spell_cast)(struct DeathKnight* );
    void(*ultimate_spell_cast)(struct DeathKnight* );
    void(*regenerateMana)(struct DeathKnight * );
}DeathKnight;




void deathKnightActionCastBasicSpell(DeathKnight* currentHero);
void deathKnightActionCastUltimateSpell(DeathKnight* currentHero);
void deathKnightAction(DeathKnight* currentHero, int* current_choice);
DeathKnight * initDeathKnight( char name[MAX_HERO_NAME_SIZE + 1] , int max_mana, int regenManaRate );



#endif //WARCRAFT_DEATHKNIGHT_H
