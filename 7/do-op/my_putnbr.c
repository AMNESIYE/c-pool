/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_putnbr
** File description:
**      Displays put nbr
*/

#include "do_op.h"

void my_putnbr(int n)
{
    unsigned int new_n = n;

    if (n < 0) {
        my_putchar('-');
        new_n = -n;
    }

    if (new_n >= 10) {
        my_putnbr(new_n / 10);
        my_putchar(new_n % 10 + '0');
    }

    if (new_n < 10) {
        my_putchar(new_n % 10 + '0');
    }
}