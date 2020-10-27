/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** check_operator
** File description:
**      switch two string values.
*/

#include "do_op.h"

char check_operator(char *str)
{
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] == '+')
            return '+';
        if (str[a] == '-')
            return '-';
        if (str[a] == '*')
            return '*';
        if (str[a] == '/')
            return '/';
        if (str[a] == '%')
            return '%';
    }
    return 84;
}