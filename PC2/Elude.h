//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_ELUDE_H
#define PC2_ELUDE_H

#include "Defense.h"

class Elude: public Defense {
public:
    explicit Elude(int level): Defense(level){};
    int defense(int level) override;
};


#endif //PC2_ELUDE_H
