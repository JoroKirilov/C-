#ifndef ARCHMAGE_H_
#define ARCHMAGE_H_
#ifndef HERO_H_
#include "Hero.h"
#endif

typedef struct ArchMage{
    Hero instance;
    int manaRegenModifier;
    void(*action)(struct ArchMage *);
    //void(*ultimate_spell_cast)(struct ArchMage * );
   // void(*regenerateMana)(struct ArchMage * );
}ArchMage;

ArchMage * initArchMage( char name[MAX_HERO_NAME_SIZE + 1] , int max_mana, int regenManaRate ,int manaModifier);
void archMageCastBasicSpell(ArchMage* currentArchmage);
void regenManaArchMage(ArchMage* currentArchMage);
void archMageCastUltimateSpell(ArchMage* currentArchmage);
void archMageAction(ArchMage* currentArchmage,int *current_choice);


#endif
