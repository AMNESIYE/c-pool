/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strncat
** File description:
**      Appends two strings, n max length.
*/

void my_putchar(char c);

int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

char *my_strncat(char *dest, const char *src, int nb)
{
    int size = my_strlen(dest);

    for (int i = 0; src[i] != '\0' && i < nb; i++) {
        dest[size] = src[i];
        size++;
    }

    dest[size] = '\0';

    return dest;
}