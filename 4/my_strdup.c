/*
** ETNA PROJECT, 22/10/2020 by meritt_j
** my_strdup
** File description:
**      Transform every char in uppercase
*/

#include <stdlib.h>

void my_putchar(char c);

int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

char *my_strcpy(char *dest, const char *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }

    dest[a] = '\0';

    return dest;
}

char *my_strdup(const char *str)
{
    int size = my_strlen(str);

    char *new_str = malloc(sizeof(char) * size);

    my_strcpy(new_str, str);

    return new_str;
}