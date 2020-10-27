/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_factorial_rec
** File description:
**      Return factorial of a number.
*/

int my_factorial_rec(int nb)
{
    int result;

    if (nb == 0)
        return 1;
    if (nb < 0)
        return 0;

    result = nb * my_factorial_rec(nb - 1);

    return result;
}
