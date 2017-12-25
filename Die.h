//
// Created by Jimmy on 23.12.2017.
//

#ifndef YAHTZEE_DIE_H
#define YAHTZEE_DIE_H

#include <stdbool.h>

typedef struct Die {
    int value;
    bool saved;
} Die;

typedef struct Dice {
    Die *dice;
    int size;
} Dice;



Dice *rollTheDice();

void forEachDieIn(Dice *dice, void doThis(Die *die, int index));

#endif //YAHTZEE_DIE_H
