/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_putchar
** File description:
**      Get numbers in string
*/

#include <unistd.h>
#include "do_op.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
