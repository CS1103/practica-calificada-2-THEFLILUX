//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_PUNCH_H
#define PC2_PUNCH_H

#include "Attack.h"

class Punch: public Attack {
public:
    explicit Punch(int power): Attack(power){};
    int attack(int power) override;
};


#endif //PC2_PUNCH_H
