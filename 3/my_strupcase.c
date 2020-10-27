/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strupcase
** File description:
**      Transform every char in uppercase
*/

void my_putchar(char c);

char *my_strupcase(char *str)
{
    int a = 0;
    while (str[a] != '\0') {
        if (str[a] >= 97 && str[a] <= 122)
            str[a] -= 32;
        a++;
    }

    return str;
}