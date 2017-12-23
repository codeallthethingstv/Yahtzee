//
// Created by Jimmy on 24.12.2017.
//

#include "Utils.h"
#include <stdlib.h>
#include <mem.h>

char **split(char *str, const char *delim) {
    char **res = NULL;
    char *part;
    int i = 0;

    char *aux = strdup(str);

    part = strdup(strtok(aux, delim));

    while (part) {
        res = (char **) realloc(res, (i + 1) * sizeof(char *));
        *(res + i) = strdup(part);

        part = strdup(strtok(NULL, delim));
        i++;
    }

    res = (char **) realloc(res, i * sizeof(char *));
    *(res + i) = NULL;

    return res;
}
