/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_putchar
** File description:
**      Header
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
