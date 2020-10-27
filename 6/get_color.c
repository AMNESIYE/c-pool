/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** get_color
** File description:
**      Return factorial of a number.
*/

unsigned int
get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (red << 16) + (green << 8) + blue;
}
