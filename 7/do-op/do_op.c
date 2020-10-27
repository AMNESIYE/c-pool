/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** do_op
** File description:
**      switch two string values.
*/

#include "do_op.h"

int do_op(int a, int b, char operator)
{
    switch (operator) {
        case '-':
            return a - b;
        case '+':
            return a + b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '%':
            return a % b;
        default:
            return 0;
    }
}