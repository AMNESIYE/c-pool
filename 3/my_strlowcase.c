/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strlowcase
** File description:
**      Transform every char in lowercase
*/

void my_putchar(char c);

char *my_strlowcase(char *str)
{
    int a = 0;
    while (str[a] != '\0') {
        if (str[a] >= 65 && str[a] <= 90)
            str[a] += 32;
        a++;
    }

    return str;
}