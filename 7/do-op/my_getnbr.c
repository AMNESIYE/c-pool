/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_getnbr
** File description:
**      Get numbers in string
*/

#include "do_op.h"

static int concat_nbr(const char *str, int first, int last)
{
    int position = 1;
    int result = 0;

    for (int a = last; a >= first; a--) {
        result += (str[a] - '0') * position;
        position *= 10;
    }

    for (int a = first - 1; str[a] == '-' || str[a] == '+';
         a--)
        if (str[a] == '-')
            result *= (-1);

    return result;
}

int my_getnbr(const char *str)
{
    int a;
    int first = 0;
    int last = 0;
    int is_number = 0;

    for (a = 0; str[a] != '\0'; a++) {
        if (str[a] >= '0' && str[a] <= '9') {
            if (is_number == 0) {
                first = a;
                is_number++;
            }
            last = a;
        } else if (is_number == 1)
            break;
    }

    return concat_nbr(str, first, last);
}