/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** my_strncmp
** File description:
**      switch two string values.
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int a;
    int b;

    for (a = 0; s1[a] != '\0' && a < n; a++) {
    }

    for (b = 0; s2[b] != '\0' && b < n; b++) {
    }

    return a - b;
}