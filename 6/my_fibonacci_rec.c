/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_fibonacci_rec
** File description:
**      Get the nb-nth number of the Fibonacci sequence.
*/

int my_fibonacci_rec(int nb)
{
    if (nb <= 0)
        return 0;
    else if (nb == 1)
        return 1;
    else
        return my_fibonacci_rec(nb - 1) + my_fibonacci_rec(nb - 2);
}