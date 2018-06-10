//
// Created by zgershuny on 6/8/18.
//

#ifndef ADVENTURE_ITEMS_H
#define ADVENTURE_ITEMS_H
#include <string>

class Player {
private:
    std::string name, race;
    int lifepoints, strength, brains;

public:

    Player()
    {
        name = "Adventurer";
        race = std::to_string('unknown');
        lifepoints = 100;
        strength = 0;
        brains = 5;
    }

    void setName(std::string);
    std::string getName();

    void setRace(std::string);
    std::string getRace();

    int getStats();
    int getStr();
    int getBrains();

    int selDMG();
    int DMGstr(int);
    int DMGbrain(int);
};



#endif //ADVENTURE_ITEMS_H
