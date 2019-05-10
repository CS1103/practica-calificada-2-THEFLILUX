//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H

#include <vector>
#include <iostream>
#include <string>
#include "Fight.h"

class Arena {
    std::vector<Fight> fights;
    std:: string filename;
public:
    Arena();
    void run(Fighter a, Fighter b);
    std::vector<Fight> get_fights();
    void load_fights(std::string filename);
    void run_all();

};


#endif //PC2_ARENA_H
