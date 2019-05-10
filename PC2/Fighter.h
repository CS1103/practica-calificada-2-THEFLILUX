//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include "Defense.h"
#include "Attack.h"
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"
#include "Elude.h"
#include "Shield.h"
#include "Armor.h"

class Fighter {
protected:
    Attack* attack1 = new Punch(1);
    Attack* attack2 = new Saber(5);
    Attack* attack3 = new Firearm(10);
    Defense* defense1 = new Elude(1);
    Defense* defense2 = new Shield(4);
    Defense* defense3 = new Armor(8);
public:

    Fighter(Attack *attack1, Attack *attack2, Attack *attack3, Defense *defense1, Defense *defense2,
            Defense *defense3);

    virtual int attack(Attack*);
    virtual int defense(Defense*);
};


#endif //PC2_FIGHTER_H
