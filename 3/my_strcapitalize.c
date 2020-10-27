/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strcapitalize
** File description:
**      Transform every first letter of word in uppercase.
*/

char *my_strcapitalize(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] >= 'a' && str[a] <= 'z') {
            if (a == 0)
                str[a] = str[a] - ' ';
            else if (str[a - 1] ==
                     ' ' || str[a - 1] == '-' || str[a - 1] == '+')
                str[a] = str[a] - ' ';
        } else if (str[a] >= 'A' && str[a] <= 'Z' && a > 0)
                str[a] = str[a] + ' ';
    }
    return str;
}