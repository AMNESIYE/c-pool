/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strcat
** File description:
**      Appends two strings.
*/

#include "./my.h"

char *my_strcat(char *dest, const char *src)
{
    int size = my_strlen(dest);

    for (int i = 0; src[i] != '\0'; i++) {
        dest[size] = src[i];
        size++;
    }

    dest[size] = '\0';

    return dest;
}
