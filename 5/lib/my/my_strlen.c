/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strlen
** File description:
**      Display number of characters in char*
*/

#include "./my.h"

int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}