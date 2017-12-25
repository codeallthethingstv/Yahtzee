//
// Created by Jimmy on 23.12.2017.
//

#include <stdlib.h>
#include "Player.h"
#include "string.h"

void initPlayer(Player *player, int index);

Playerlist *createPlayerList(int amountOfPlayers) {
    Playerlist *newPlayerlist = malloc(sizeof(Playerlist));
    newPlayerlist->players = malloc(amountOfPlayers * sizeof(Player));
    newPlayerlist->size = amountOfPlayers;
    forEachPlayerIn(newPlayerlist, initPlayer);
    return newPlayerlist;
}

void initPlayer(Player *player, int index) {
    player->rounds = createDefaultRounds();
    player->name = "not set";
}

void setPlayerName(Player *player, char *name) {
    player->name = malloc(strlen(name) * sizeof(char));
    strcpy(player->name, name);
}

void forEachPlayerIn(Playerlist *playerlist, void doThis(Player *player, int index)) {
    for (int i = 0; i < playerlist->size; ++i) {
        doThis(&playerlist->players[i], i);
    }
}
