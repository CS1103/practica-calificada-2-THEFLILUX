//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_JASONSTATHAM_H
#define PC2_JASONSTATHAM_H

#include "Fighter.h"

class JasonStatham: public Fighter {
public:
    JasonStatham() : Fighter(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr) {}

    int attack() override;
    int defense() override;
};


#endif //PC2_JASONSTATHAM_H
