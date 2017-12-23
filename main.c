#include <stdio.h>
#include <stdlib.h>
#include "Player.h"

void letUserInitializePlayer(Player *player, int index);

Playerlist *letUserInitializeAllPlayers(int amountOfPlayers) {
    Playerlist *playerlist = createPlayerList(amountOfPlayers);
    forEachPlayerIn(playerlist, letUserInitializePlayer);
    return playerlist;
}

void letUserInitializePlayer(Player *player, int index) {
    char *name = malloc(50);
    printf("\nPlease choose the name of Player %d: ", index + 1);
    scanf("%10s", name);
    setPlayerName(player, name);
    printf("\nPlayer %d is now %s!\n", index + 1, player->name);
    free(name);
}

void tellUserPlayerData(Player *player, int index) {
    printf("\nProfile of Player %d\n", index++);
    printf("Name: %s\n", player->name);
}

int letUserChooseAmountOfPlayers() {
    int amountOfPlayers;
    printf("Please enter the number of Players to start a new game: ");
    //TODO: validate
    scanf("%d", &amountOfPlayers);
    printf("\nGame will be started with %d players.\n", amountOfPlayers);
    return amountOfPlayers;
}

int main() {
    printf("Welcome to Yahtzee!\n");
    printf("---------------------------------\n");
    int amoutnOfPlayers = letUserChooseAmountOfPlayers();
    Playerlist *playerlist = letUserInitializeAllPlayers(amoutnOfPlayers);
    forEachPlayerIn(playerlist, tellUserPlayerData);
    return 0;
}
