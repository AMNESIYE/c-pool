/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_putnbr_base
** File description:
**      Transform every first letter of word in uppercase.
*/

void my_putchar(char c);

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

int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

void dec_to_bin(int nbr)
{
    int remainder;
    char result[40];
    int i = 0;

    while (nbr != 0) {
        remainder = nbr % 2;
        nbr = nbr / 2;
        result[i] = remainder + '0';
        i++;
    }

    for (int a = my_strlen(result); a >= 0; a--) {
        my_putchar(result[a]);
    }
}

void dec_to_hex(int nbr)
{
    int remainder;
    char result[40];
    int i = 0;

    while (nbr != 0) {
        remainder = nbr % 16;
        nbr = nbr / 16;
        if (remainder < 10)
            result[i] = remainder + '0';
        if (remainder >= 10) {
            result[i] = remainder - 10 + 'A';
        }
        i++;
    }

    for (int a = my_strlen(result); a >= 0; a--) {
        my_putchar(result[a]);
    }
}

void my_putnbr_base(int nbr, const char *base)
{
    int size = my_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr *= (-1);
    }

    switch (size) {
        case 2:
            dec_to_bin(nbr);
            break;
        case 16:
            dec_to_hex(nbr);
            break;
        default:
            my_putnbr(nbr);
    }
}