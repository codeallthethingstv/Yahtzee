//
// Created by Jimmy on 25.12.2017.
//

#ifndef YAHTZEE_THROW_H
#define YAHTZEE_THROW_H

#include "Die.h";

typedef struct Throw {
    Dice dice;
    bool rolled;
} Throw;

typedef struct Round {
    Throw *throws;
    int throwsSize;
    bool finished;
} Round;

typedef struct Rounds {
    Round *rounds;
    int size;
} Rounds;

Rounds *createDefaultRounds();

#endif //YAHTZEE_THROW_H
