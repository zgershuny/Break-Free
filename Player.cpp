//
// Created by zgershuny on 6/8/18.
//

#include "Player.h"
#include <string>
#include <iostream>

// Player's Name Member Functions
void Player::setName(std::string playerName)
{
    name = playerName;
}

std::string Player::getName()
{
    return name;
}

// Prompt and Set Player's Race/Stats Member Functions
void Player::setRace(std::string choice)
{
    if(choice == "Human")
    {
        race = "Human", strength = 50, brains = 50;
    }
    else if(choice == "human")
    {
        race = "Human", strength = 50, brains = 50;
    }
    else if(choice == "Elf")
    {
        race = "Elf", strength = 25, brains = 75;
    }
    else if(choice == "elf")
    {
        race = "Elf", strength = 25, brains = 75;
    }
    else if(choice == "Giant")
    {
        race = "Giant", strength = 75, brains = 25;
    }
    else if(choice == "giant")
    {
        race = ("Giant"), strength = 75, brains = 25;
    }
}

std::string Player::getRace()
{
    return race;
}

// Get Stats
int Player::getStats()
{
    std::cout << "Current Stats\n";
    std::cout << "Lifepoints: " << lifepoints << std::endl;
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Brains: " << brains << std::endl;
}

int Player::getStr()
{
    return strength;
}

int Player::getBrains()
{
    return brains;
}

// Do DMG
int Player::selDMG()
{
    int choice;
    do
    {
        std::cout << "Select your move:" << std::endl;
        std::cout << "1. Strength" << std::endl;
        std::cout << "2. Brains" << std::endl;
        std::cout << "3. View Your Stats" << std::endl;
        std::cout << "4. Do Nothing" << std::endl;
        std::cin >> choice;
    } while (choice != 1 and choice != 2 and choice != 3);
    return choice;
}

int Player::DMGstr(int dmg)
{
    int newDMG;
    unsigned seed;
    seed = time(0);
    srand(seed);
    std::cout << "You used your strength..." << std::endl;
    newDMG = rand() % dmg;
    std::cout << "DMG: " << newDMG << std::endl;
    return newDMG;
}

int Player::DMGbrain(int dmg)
{
    int newDMG;
    unsigned seed;
    seed = time(0);
    srand(seed);
    std::cout << "You used your brains..." << std::endl;
    newDMG = rand() % dmg;
    std::cout << "DMG: " << newDMG << std::endl;
    return newDMG;
}