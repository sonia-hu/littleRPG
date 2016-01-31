#include <stdio.h>
#include <iostream>
#include "baseclasses.h"
#include "heroskills.h"
#include "baseskills.h"
using std::cout;
using std::cin;

////////////////////////////////

Hero player; //the player's character

// The beginning. Will probably change and be moved to its own file later.
// Gets the player's name, and creates their first hero.

void startGame()
{
    char playerName[20];
    string choice;
	
    printf("What's your name?\n");
    printf("My name is ");
    scanf("%[^\n]%*c", playerName);
    printf("\nNice to meet you, %s\n", playerName);
	
    while(true) {
		printf("\n\n\n\n\n\n\n---------------------\n\n");
		printf("What class would you like to be? Enter '4' for more info.\n");
		printf("1. Brawler\n2. Rogue\n3. Mage\n4. More Info\n\n\n\n\n");
		
		cin >> choice;
		if("4" == choice) {
			printf("1. Brawler: A close range, well balanced fighter.\n");
			printf("2. Rogue: Crafty and quick. Medium range.\n");
			printf("3. Mage: Specializing in the magic arts. Long range.\n");
			printf("Now pick one!\n");
		} else if("1" == choice) {
			player.setClassBrawler();
			break;
		} else if("2" == choice) {
			player.setClassRogue();
			break;
		} else if("3" == choice) {
			player.setClassMage();
			break;
		} else {
			printf("That's not an option.");
		}
	}
		player.setHeroName(playerName);
		printf("Your stats:\n");
		cout << "Name: " << player.getHeroName() << "\n";
		printf("HP: %d\nDef: %d\n", player.getHp(), player.getDef());
		printf("Min. Dmg: %d\nMax Dmg%d\n", player.getMinDmg(), player.getMaxDmg());
		printf("Accuracy: %d\nDodge: %d\n", player.getAcc(), player.getDodge());
		printf("Magic Dmg: %d\nCrit Chance: %d\n", player.getMagDmg(), player.getCritChance());
		printf("\nYour Skills:\n");
		cout << player.getSkill(0).getSkillName() << ", " << player.getSkill(1).getSkillName() << ", ";
		cout << player.getSkill(2).getSkillName() << ".\n";
		return;
}

// battleEncounter starts a battle against monster with ID monsterType.
// so far there are no actual monsters.
// battle related functions will be moved to their own file/class later.
// void battleEncounter(int monsterType);
void dummyBattleEncounter() {
	string dummyName = "Slime";
	int dummyHP = 10;
	int dummyDmg = 4;
	int dummyDef = 1;
	int dummyAcc = 6;
	int dummyDodge = 1;
	int dummyRange = 1;
	while((dummyHP > 0) && (player.getHp() > 0)) {
		system("cls");
		printf("===================================\n\n");
		cout << player.getHeroName() << "'s HP: " << player.getHp() << "\n";
		// insert HP here in the form of a bar like |oooooo---|
		cout << dummyName << "'s HP: " << dummyHP << "\n";
		
	}
}

int main(int argc, char** argv)
{
    startGame();
    return 0;
}
