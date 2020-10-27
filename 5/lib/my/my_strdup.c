/*
** ETNA PROJECT, 22/10/2020 by meritt_j
** my_strdup
** File description:
**      Transform every char in uppercase
*/

#include <stdlib.h>
#include "./my.h"

char *my_strdup(const char *str)
{
    int size = my_strlen(str);

    char *new_str = malloc(sizeof(char) *  size);

    my_strcpy(new_str, str);

    return new_str;
}
