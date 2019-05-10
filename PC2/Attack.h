//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H


class Attack {
    int power;
public:
    explicit Attack(int _power);
    virtual int attack(int _power);
};


#endif //PC2_ATTACK_H
