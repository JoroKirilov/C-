#ifndef DRAWRANGER_H_
#define DRAWRANGER_H_
#ifndef HERO_H_
    #include "Hero.h"

#endif

typedef struct DrawRanger{
    Hero instance;
    void(*basic_spell_cast)(struct DrawRanger* );
    void(*ultimate_spell_cast)(struct DrawRanger* );
    void(*regenerateMana)(struct DrawRanger * );
}DrawRanger;



void drawRangerAction(DrawRanger* currentHero, int* current_choice);
void drawRangeActionCastBasicSpell(DrawRanger* currentHero);
void drawRangeActionCastUltimateSpell(DrawRanger* currentHero);
DrawRanger * initDrawRanger( char name[MAX_HERO_NAME_SIZE + 1] , int max_mana, int regenManaRate );

#endif //WARCRAFT_DRAWRANGER_H
