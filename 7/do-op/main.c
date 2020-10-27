/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** main
** File description:
**      switch two string values.
*/

#include "do_op.h"

static void my_putstr(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return 84;

    int a = my_getnbr(argv[1]);
    int b = my_getnbr(argv[3]);

    char operator = check_operator(argv[2]);

    if (b == 0 && (operator == '%' || operator == '/')) {
        if (operator == '%')
            my_putstr("Stop: modulo by zero");
        else if (operator == '/')
            my_putstr("Stop: division by zero");
        return 84;
    }

    my_putnbr(do_op(a, b, operator));
    return 0;
}
