//
// Created by Jimmy on 23.12.2017.
//

#ifndef YAHTZEE_DIE_H
#define YAHTZEE_DIE_H

#include <stdbool.h>

typedef struct Die {
    int value;
} Die;

typedef struct Dice {
    Die *dice;
    int size;
} Dice;

typedef struct Throw {
    int value;
    bool saved;
} Throw;

typedef struct Round {
    Throw throws[3];
    int size;
} Throws;


Dice *rollTheDice();

void forEachDieIn(Dice *dice, void doThis(Die *die, int index));

#endif //YAHTZEE_DIE_H
