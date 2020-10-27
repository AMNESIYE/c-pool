/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** my_show_params_array
** File description:
**      switch two string values.
*/

#include "my_struct.h"
#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_putstr(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}

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

void my_show_params_array(const struct info_param *par)
{
    const struct info_param *temp = par;
    for (int i = 1; temp[i].length > 0; i++) {
        my_putstr("str=\"");
        my_putstr(temp[i].str);
        my_putstr("\" | length=[");
        my_putnbr(temp[i].length);
        my_putstr("] | words=[");
        for (int j = 0; temp[i].word_array[j] != NULL; j++) {
            my_putchar('\'');
            my_putstr(temp[i].word_array[j]);
            my_putchar('\'');
            if (temp[i].word_array[j + 1] != 0)
                my_putstr(", ");
        }
        my_putstr("]");
        my_putchar('\n');
    }
}