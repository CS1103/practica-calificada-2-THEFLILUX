//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_FIREARM_H
#define PC2_FIREARM_H

#include "Attack.h"

class Firearm: public Attack {
public:
    explicit Firearm(int power): Attack(power){};
    int attack(int power) override;
};


#endif //PC2_FIREARM_H
