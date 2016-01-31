#include "baseclasses.h"
using std::string;

// Brawler, Rogue, and Mage are the 3 base classes.

void Hero::setClassBrawler()
{
    classType = "Brawler";
    hp = 15;
    def = 2;
    dodge = 1;
    acc = 6;
    minDmg = 3;
    maxDmg = 5;
    magDmg = 0;
    critChance = 5;
    Skill Punch;
    Punch.setStats(-1.1, 0, 10, 0, 0, 1);
    Punch.setDoT(false);
    Punch.setSkillName("Punch");
    Skill Bandage;
    Bandage.setStats(0, 0, 10, 0, 2, 2);
    Bandage.setDoT(false);
    Bandage.setSkillName("Bandage");
    Skill Uppercut;
    Uppercut.setStats(1.2, 0, 6, 0, 0, 1);
    Uppercut.setDoT(false);
    Uppercut.setSkillName("Uppercut");
    heroSkills[0] = Punch;
    heroSkills[1] = Bandage;
    heroSkills[2] = Uppercut;
}

void Hero::setClassRogue()
{
    classType = "Rogue";
    hp = 9;
    def = 0;
    dodge = 3;
    acc = 7;
    minDmg = 1;
    maxDmg = 6;
    magDmg = 1;
    critChance = 15;
}

void Hero::setClassMage()
{
    classType = "Mage";
    hp = 15;
    def = 1;
    dodge = 1;
    acc = 6;
    minDmg = 1;
    maxDmg = 2;
    magDmg = 4;
    critChance = 7;
}

// Path 1 of Brawler
void Hero::setClassGuard()
{
    classType = "Guard";
    hp = 30;
    def = 5;
    dodge = 1;
    acc = 6;
    minDmg = 5;
    maxDmg = 7;
    magDmg = 0;
    critChance = 5;
}

// Path 2 of Brawler
void Hero::setClassDuelist()
{
    classType = "Duelist";
    hp = 20;
    def = 2;
    dodge = 2;
    acc = 8;
    minDmg = 3;
    maxDmg = 10;
    magDmg = 0;
    critChance = 15;
}

// Path 1 of Rogue
void Hero::setClassAssassin()
{
    classType = "Assassin";
    hp = 15;
    def = 0;
    dodge = 4;
    acc = 9;
    minDmg = 3;
    maxDmg = 9;
    magDmg = 0;
    critChance = 25;
}

// Path 2 of Rogue
// Alchemist magic damage is damage over time
void Hero::setClassAlchemist()
{
    classType = "Alchemist";
    hp = 25;
    def = 3;
    dodge = 2;
    acc = 6;
    minDmg = 2;
    maxDmg = 4;
    magDmg = 4;
    critChance = 5;
}

// Path 1 of Mage
// Wizard can hit multiple enemies
void Hero::setClassWizard()
{
    classType = "Wizard";
    hp = 20;
    def = 2;
    dodge = 1;
    acc = 6;
    minDmg = 2;
    maxDmg = 3;
    magDmg = 5;
    critChance = 10;
}

// Path 2 of Mage
// Crit for Healer = chance of crit on heal
// Healer cannot crit attacks
void Hero::setClassHealer()
{
    classType = "Healer";
    hp = 20;
    def = 1;
    dodge = 1;
    acc = 8;
    minDmg = 2;
    maxDmg = 3;
    magDmg = 6;
    critChance = 20;
}

// Slot must be an integer from 1 to 3
// addSkill adds newSkill to a certain slot

// the following are accessors:

int Hero::getHp()
{
    return hp;
}

int Hero::getDef()
{
    return def;
}

int Hero::getDodge()
{
    return dodge;
}

int Hero::getAcc()
{
    return acc;
}

int Hero::getMinDmg()
{
    return minDmg;
}

int Hero::getMaxDmg()
{
    return maxDmg;
}

int Hero::getMagDmg()
{
    return magDmg;
}

int Hero::getCritChance()
{
    return critChance;
}

string Hero::getHeroName()
{
    return heroName;
}

string Hero::getClassType()
{
    return classType;
}

Skill Hero::getSkill(int slot)
{
    return heroSkills[slot];
}

// the following are mutators:
void Hero::setHp(int newStat)
{
    hp = newStat;
}

void Hero::setDef(int newStat)
{
    def = newStat;
}

void Hero::setDodge(int newStat)
{
    dodge = newStat;
}

void Hero::setAcc(int newStat)
{
    acc = newStat;
}

void Hero::setMinDmg(int newStat)
{
    minDmg = newStat;
}

void Hero::setMaxDmg(int newStat)
{
    maxDmg = newStat;
}

void Hero::setMagDmg(int newStat)
{
    magDmg = newStat;
}

void Hero::setCritChance(int newStat)
{
    critChance = newStat;
}

void Hero::setHeroName(string newName)
{
    heroName = newName;
}

void Hero::setClassType(string newClass)
{
    classType = newClass;
}

void Hero::addSkill(Skill newSkill, int slot)
{
    heroSkills[slot] = newSkill;
    return;
}