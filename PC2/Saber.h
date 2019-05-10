//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_SABER_H
#define PC2_SABER_H

#include "Attack.h"

class Saber: public Attack {
public:
    explicit Saber(int power): Attack(power){};
    int attack(int power) override;
};


#endif //PC2_SABER_H
