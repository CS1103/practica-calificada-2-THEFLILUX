//
// Created by Jorge on 10/05/2019.
//

#include "ChuckNorris.h"

int ChuckNorris::attack(Attack attack1) {
    return Fighter::defense(attack1);
}

int ChuckNorris::defense(Attack defense1) {
    return Fighter::defense(defense1);
}
