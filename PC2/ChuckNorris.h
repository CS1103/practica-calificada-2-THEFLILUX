//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_CHUCKNORRIS_H
#define PC2_CHUCKNORRIS_H

#include "Fighter.h"

class ChuckNorris: public Fighter {
public:
    ChuckNorris() : Fighter(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {}

    int attack(Attack*) override;
    int defense(Defense*) override;
};


#endif //PC2_CHUCKNORRIS_H
