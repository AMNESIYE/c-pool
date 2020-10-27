/*
** ETNA PROJECT, 20/10/2020 by meritt_j
** my_strcpy
** File description:
**      Copy value of a string into another.
*/

#include "./my.h"

char *my_strcpy(char *dest, const char *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }

    dest[a] = '\0';

    return dest;
}