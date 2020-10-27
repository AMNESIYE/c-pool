/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_iseven
** File description:
**      Return if a number is even or odd
*/

void my_putchar(char c);

void my_iseven(int n)
{
    if ((n % 2) == 0) {
        my_putchar('E');
    } else {
        my_putchar('O');
    }
}