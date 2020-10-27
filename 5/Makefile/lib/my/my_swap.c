/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_swap
** File description:
**      Swap values of two *int
*/

#include "./my.h"

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}