//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_SHIELD_H
#define PC2_SHIELD_H

#include "Defense.h"

class Shield: public Defense {
public:
    explicit Shield(int level): Defense(level){};
    int defense(int level) override;
};


#endif //PC2_SHIELD_H
