//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include "Fight.h"
#include <vector>

class Arena {
    std::vector<Fight> fights;
public:
    void run(Fighter a, Fighter b);
    std::vector<Fight> get_fights();
    void run_all();

};


#endif //PC2_ARENA_H
