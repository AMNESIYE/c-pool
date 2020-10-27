/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strcmp
** File description:
**      switch two string values.
*/

#include "./my.h"

int check_if_n(int a, int n)
{
    if (a > n)
        a = n;
    return a;
}

int my_strncmp(const char *s1, const char *s2, int n)
{
    int a;
    int b;

    for (a = 0; s1[a] != '\0'; a++) {
    }

    for (b = 0; s2[b] != '\0'; b++) {
    }

    a = check_if_n(a, n);
    b = check_if_n(b, n);

    if (a > b)
        return 1;
    else if (a < b)
        return -1;

    return 0;
}