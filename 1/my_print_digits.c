/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_print_digits
** File description:
**      Display digits
*/

void my_putchar(char c);

void my_print_digits(void)
{
    for (char c = '0' ; c <= '9' ; c++) {
        my_putchar(c);
    }
}