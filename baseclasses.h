#ifndef BASECLASSES_H
#define BASECLASSES_H

#include <stdio.h>
#include <iostream>
#include <string>
#include "heroskills.h"
using std::string;

class Hero
{
private:
    int hp;
    int def;
    int dodge;
    int acc;
    int minDmg;
    int maxDmg;
    int magDmg;
    int critChance;
    string heroName;
	string classType;
	Skill heroSkills[3];
public:
    void setClassBrawler();
    void setClassRogue();
    void setClassMage();
	void setClassGuard();
    void setClassDuelist();
    void setClassAssassin();
	void setClassAlchemist();
    void setClassWizard();
    void setClassHealer();
	
    int getHp();
	int getDef();
	int getDodge();
	int getAcc();
	int getMinDmg();
	int getMaxDmg();
	int getMagDmg();
	int getCritChance();
	string getHeroName();
	string getClassType();
	Skill getSkill(int slot);

    void setHp(int newStat);
	void setDef(int newStat);
	void setDodge(int newStat);
	void setAcc(int newStat);
	void setMinDmg(int newStat);
	void setMaxDmg(int newStat);
	void setMagDmg(int newStat);
	void setCritChance(int newStat);
	void setHeroName(string newName);
	void setClassType(string newClass);
	void addSkill(Skill newSkill, int slot);
};

#endif