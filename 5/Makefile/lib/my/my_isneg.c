/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_isneg
** File description:
**      Return if a number is positive or negative
*/

#include "./my.h"

void my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
}