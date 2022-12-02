#ifndef DEFINES_H_
#define DEFINES_H_

#define HERROES_NUMBER 3
#define MAX_HERO_NAME_SIZE 20

enum ActionType {
  CAST_BASIC_SPELL=0, CAST_ULTIMATE_SPELL, REGENERATE_MANA, COUNT_ACTIONS
};

enum SpellType {
  BASIC = 0, ULTIMATE = 1
};

enum HeroClass{ ARCHMAGE= 0, DEATHKNIGHT, DRAWRANGER };


#define ARCHMAGE_BASIC_SPELL_NAME "Water Elemental"
#define ARCHMAGE_BASIC_SPELL_MANA_COST 120
#define ARCHMAGE_ULTIMATE_SPELL_NAME "Mass Teleport"
#define ARCHMAGE_ULTIMATE_SPELL_MANA_COST 180

#define DEATH_KNIGHT_BASIC_SPELL_NAME "Death Coil"
#define DEATH_KNIGHT_BASIC_SPELL_MANA_COST 75
#define DEATH_KNIGHT_ULTIMATE_SPELL_NAME "Animate Dead"
#define DEATH_KNIGHT_ULTIMATE_SPELL_MANA_COST 200

#define DRAW_RANGER_BASIC_SPELL_NAME "Silence"
#define DRAW_RANGER_BASIC_SPELL_MANA_COST 90
#define DRAW_RANGER_ULTIMATE_SPELL_NAME "Charm"
#define DRAW_RANGER_ULTIMATE_SPELL_MANA_COST 150

#endif /* DEFINES_H_ */
