/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** my_strcmp
** File description:
**      compare size of two *char
*/

int my_strcmp(const char *s1, const char *s2)
{
    int a;
    int b;

    for (a = 0; s1[a] != '\0'; a++) {
    }

    for (b = 0; s2[b] != '\0'; b++) {
    }

    return a - b;
}