//
// Created by Jimmy on 23.12.2017.
//

#include <stdlib.h>
#include "Die.h"

void rollDie(Die *die, int index);

Dice *rollTheDice() {
    Dice *dice = malloc(sizeof(Dice));
    dice->size = 5;
    dice->dice = malloc(dice->size * sizeof(Die));
    forEachDieIn(dice, rollDie);
    return dice;
}

void forEachDieIn(Dice *dice, void doThis(Die *die, int index)) {
    for (int i = 0; i < dice->size; ++i) {
        doThis(&dice->dice[i], i);
    }
}

void rollDie(Die *die, int index) {
    die->value = (rand() % 6) + 1;
}
