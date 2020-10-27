/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strcmp
** File description:
**      switch two string values.
*/

char *my_strstr(char *str, const char *to_find)
{
    for (int i = 0; str[i] != 0; i++)
        for (int a = 0; str[i + a] == to_find[a]; a++)
            if (to_find[a + 1] == '\0')
                return str + i;
    return 0;
}