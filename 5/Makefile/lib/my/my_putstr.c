/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_putstr
** File description:
**      Display content in char*
*/

#include "./my.h"

void my_putstr(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}