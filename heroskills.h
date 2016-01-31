#ifndef HEROSKILLS_H
#define HEROSKILLS_H
#include <string>
#include <stdbool.h>
#include <math.h>
using std::string;

class Skill
{
private:
    string name;
    float dmgMod;
    float magDmgMod;
	int accuracy;
    bool DoT;
    float DoTDuration;
    float healMod;
	int skillRange;

public:
	void setStats(float sDmgMod, float sMagDmgMod, int sAccuracy, float sDoTDuration, float sHealMod, int sSkillRange);
    void upgrade(int SkillType);
	
    void setDmgMod(float amount);
    void setMagDmgMod(float amount);
	void setAccuracy(int amount);
    void setDoTDuration(float amount);
    void setHealMod(float amount);
    void setDoT(bool newState);
	void setSkillRange(int amount);
    void setSkillName(string newName);
	
    string getName();
    float getDmgMod();
    float getMagDmgMod();
	int getAccuracy();
    bool isDot();
    float getDoTDuration();
    float getHealMod();
	int getSkillRange();
	string getSkillName();
};

#endif