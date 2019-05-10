//
// Created by Jorge on 10/05/2019.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H


class Defense {
    int level;
public:
    explicit Defense(int _level);
    virtual int defense(int _level);
};


#endif //PC2_DEFENSE_H
