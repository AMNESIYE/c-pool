/*
** ETNA PROJECT, 22/10/2020 by meritt_j
** my_concat_params
** File description:
**      Transform every char in uppercase
*/

#include <stdlib.h>

int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

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

char *my_concat_params(int argc, char **argv)
{
    int size = 0;
    char *args;

    for (int i = 0; i < argc; i++)
        size += my_strlen(argv[i]);

    args = malloc(sizeof(char) * size);

    for (int i = 0; i < argc; i++) {
        my_strcat(args, argv[i]);
        if (argc - i > 1)
            my_strcat(args, "\n");
    }
    return args;
}