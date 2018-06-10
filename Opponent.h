//
// Created by zgershuny on 6/10/18.
//

#ifndef ADVENTURE_OPPONENT_H
#define ADVENTURE_OPPONENT_H


class Handcuff {
private:
    int lifepoints, strength;

public:
    Handcuff()
    {
        lifepoints = 75, strength = 1;
    }

    int handcuffDMG(int);

    int setHandcuffLP();
};


#endif //ADVENTURE_OPPONENT_H
