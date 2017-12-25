//
// Created by Jimmy on 25.12.2017.
//

#include <stdlib.h>
#include "Die.h"
#include "Player.h"

void initRound(Round *round, int index);

void forEachRoundIn(Rounds *rounds, void doThis(Round *round, int index));

void playNewRoundFor(Player *player) {
    player->rounds;
}

Rounds *createDefaultRounds() {
    Rounds *rounds = malloc(sizeof(Rounds));
    rounds->rounds = malloc(3 * sizeof(Round));
    rounds->size = 3;
    forEachRoundIn(rounds, initRound);
    return rounds;
}

void initRound(Round *round, int index) {
    round->finished = false;
    round->throws = malloc(3 * sizeof(Throw));
    round->throwsSize = 3;
}

void forEachRoundIn(Rounds *rounds, void doThis(Round *round, int index)) {
    for (int i = 0; i < rounds->size; ++i) {
        doThis(&rounds->rounds[i], i);
    }
}

