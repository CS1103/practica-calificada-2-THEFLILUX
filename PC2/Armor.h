//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_ARMOR_H
#define PC2_ARMOR_H

#include "Defense.h"

class Armor: public Defense {
public:
    explicit Armor(int level): Defense(level){};
    int defense(int level) override;
};


#endif //PC2_ARMOR_H
