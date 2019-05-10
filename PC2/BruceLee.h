//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_BRUCELEE_H
#define PC2_BRUCELEE_H

#include "Fighter.h"

class BruceLee: public Fighter {
public:
    BruceLee() : Fighter(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {}

    int attack(Attack*) override;
    int defense(Defense*) override;
};


#endif //PC2_BRUCELEE_H
