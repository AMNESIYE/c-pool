/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_print_revalpha
** File description:
**      Display Alphabet in descending order
*/

void my_putchar(char c);

void my_print_revalpha(void)
{
    for (char c = 'z' ; c >= 'a' ; c--) {
        my_putchar(c);
    }
}