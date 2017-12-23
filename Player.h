//
// Created by Jimmy on 23.12.2017.
//

#ifndef YAHTZEE_PLAYER_H
#define YAHTZEE_PLAYER_H

typedef struct Player {
    char *name;
} Player;

typedef struct Playerlist {
    int size;
    Player *players;
} Playerlist;

void forEachPlayerIn(Playerlist *playerlist, void doThis(Player *player, int index));

void setPlayerName(Player *player, char *name);

Playerlist *createPlayerList(int amountOfPlayers);

#endif //YAHTZEE_PLAYER_H
