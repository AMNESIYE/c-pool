/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_power_rec
** File description:
**      Transform every char in uppercase
*/

int my_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p == 1)
        return nb;

    nb *= my_power_rec(nb, p - 1);

    return nb;
}
