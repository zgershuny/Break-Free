#include <iostream>
#include "Player.h"
#include <string>
#include "Opponent.h"
#include <cstdlib>

int main() {
    Player player;

    // Prompt and Set Player's Name
    std::string playerName;
    std::cout << "Hello, Adventurer!" << std::endl;
    std::cout << "What is your name? ";
    std::getline(std::cin, playerName);
    player.setName(playerName);

    // Prompt and Set Player's Race
    std::string choiceRace;
    std::cout << "Choice: Human, Elf, or Giant" << std::endl;
    do
    {
        std::cout << "What is your race?" << std::endl;
        std::cin >> choiceRace;
    } while (choiceRace != "Human" && choiceRace != "human" &&
             choiceRace != "Elf" && choiceRace != "elf" &&
             choiceRace != "Giant" && choiceRace != "giant");
    player.setRace(choiceRace);

    // Do DMG
    Handcuff handcuff;
    int choiceDMG, handcuffDMGLeft;
    std::cout << "You find yourself handcuffed to the railing.";
    std::cout << "\nWhat do you do? ";
    handcuffDMGLeft = handcuff.setHandcuffLP();

    while(handcuffDMGLeft > 0)
    {
        choiceDMG = player.selDMG();
        int dmg;
        // DMG RNG
        if(choiceDMG == 1) // Strength
        {
            dmg = player.getStr();
            handcuffDMGLeft -=  player.DMGstr(dmg);
            std::cout << "You damaged the handcuffs, but not enough to break free." << std::endl;
            std::cout << "DMG Left: " << handcuffDMGLeft << std::endl; // Debugger
        }
        else if(choiceDMG == 2) // Brain
        {
            dmg = player.getBrains();
            handcuffDMGLeft -= player.DMGbrain(dmg);
            std::cout << "You attempt to picklock the handcuff, but failed to open it." << std::endl;
        }
        else if(choiceDMG == 3) // View Stats
        {
            player.getStats();
        }
        else
        {
            std::cout << "You did nothing." << std::endl;
        }
        if (handcuffDMGLeft <= 0)
        {
            std::cout << "You broke free!" << std::endl;
        }
    }



    return 0;
}