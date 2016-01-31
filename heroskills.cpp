#include "heroskills.h"
using std::string;


// Upgrades an existing skill. Modifies the stats of a skill.
// Affects a skill's levels. Adds one "+"
// skillType 1: Normal Damage Skill
// skillType 2: Magic Damage Skill
// skillType 3: Magic Damage Over Time Skill
// skillType 4: Healing Skill
void Skill::upgrade(int skillType) {
	if (1 == skillType) {
		dmgMod += 1.1;
	}
	else if (2 == skillType) {
		magDmgMod += 1.1;
	}
	else if (3 == skillType) {
		magDmgMod += 1.05;
		DoTDuration += 0.25;
	}
	else if (4 == skillType) {
		healMod += 1.1;
	}
	name += "+";
}

// the following are mutators
void Skill::setStats(float sDmgMod, float sMagDmgMod, int sAccuracy, float sDoTDuration, float sHealMod, int sSkillRange) {
	dmgMod = sDmgMod;
	magDmgMod = sMagDmgMod;
	accuracy = sAccuracy;
	DoTDuration = sDoTDuration;
	healMod = sHealMod;
	skillRange = sSkillRange;
}

void Skill::setDmgMod(float amount) {
	dmgMod = amount;
}

void Skill::setMagDmgMod(float amount) {
	magDmgMod = amount;
}

void Skill::setAccuracy(int amount) {
	accuracy = amount;
}

void Skill::setDoTDuration(float amount) {
	DoTDuration = amount;
}

void Skill::setHealMod(float amount) {
	healMod = amount;
}

void Skill::setDoT(bool newState) {
	DoT = newState;
}

void Skill::setSkillRange(int amount) {
	skillRange = amount;
}

void Skill::setSkillName(string newName) {
	name = newName;
}

// the following are accessors

string Skill::getName() {
	return name;
}

float Skill::getDmgMod() {
	return dmgMod;
}

float Skill::getMagDmgMod() {
	return magDmgMod;
}

int Skill::getAccuracy() {
	return accuracy;
}

bool Skill::isDot() {
	return DoT;
}

float Skill::getDoTDuration() {
	return DoTDuration;
}

float Skill::getHealMod() {
	return healMod;
}

int Skill::getSkillRange() {
	return skillRange;
}

string Skill::getSkillName() {
	return name;
}