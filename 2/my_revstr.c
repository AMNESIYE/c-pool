/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_revstr
** File description:
**      Display number of characters in char*
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

char *my_revstr(char *str)
{
    char temp;
    char *start_rev = str;
    char *end_rev = str;

    int size = my_strlen(str);

    for (int a = 0; a < size - 1; a++)
        end_rev++;

    for (int a = 0; a < size / 2; a++) {
        temp = *end_rev;
        *end_rev = *start_rev;
        *start_rev = temp;

        start_rev++;
        end_rev--;
    }

    return str;
}