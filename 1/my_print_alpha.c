/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_print_alpha
** File description:
**      Display Alphabet in ascending order
*/

void my_putchar(char c);

void my_print_alpha(void)
{
    for (char c = 'a'; c <= 'z'; c++) {
        my_putchar(c);
    }
    my_putchar('\n');
}