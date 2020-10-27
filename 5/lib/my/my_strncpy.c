/*
** ETNA PROJECT, 20/10/2020 by meritt_j
** my_strncpy
** File description:
**      Copy value of a string into another, max index n.
*/

#include "./my.h"

char *my_strncpy(char *dest, const char *src, int n)
{
    int a;

    for (a = 0; src[a] != '\0' && a < n; a++) {
        dest[a] = src[a];
    }

    dest[a] = '\0';

    return dest;
}