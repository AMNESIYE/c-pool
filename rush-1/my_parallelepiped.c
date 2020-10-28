/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_parallelepiped
** File description:
**      Return factorial of a number.
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void compose_line_x(int x)
{
    for (int c = 1; c <= x; c++) {
        if (c == 1 || c == x)
            my_putchar('*');
        else
            my_putchar('-');
    }
}

static void put_s_bar(void)
{
    my_putchar(' ');
    my_putchar('|');
}

static void put_s_slash(void)
{
    my_putchar(' ');
    my_putchar('/');
}

static void put_ds_star(void)
{
    my_putchar(' ');
    my_putchar(' ');
    my_putchar('*');
}

static void put_ds_slash(void)
{
    my_putchar(' ');
    my_putchar(' ');
    my_putchar('/');
}

static void compose_depth_by_y(int y, int z, int back)
{
    if (back > z - 2) {
        if (back == (z - 2) + 1 + (y - 2))
            my_putchar('|');
        else if (back > (z - 2) + 1)
            put_s_bar();
        else if (back > z - 2)
            put_ds_star();
    } else if (back > 0 && y > 1)
        put_ds_slash();
}

static int compose_up_depth(int x, int y, int z, int back)
{
    int depth = 0;
    for (int a = z - 1; a >= 1; a--) {
        for (int b = z - 1 - depth; b >= 1; b--)
            my_putchar(' ');
        if (a == (z - 1))
            compose_line_x(x);
        else if (z > 2) {
            my_putchar('/');
            for (int b = 1; b <= x - 2; b++)
                my_putchar(' ');
            if (x > 1)
                my_putchar('/');
            compose_depth_by_y(y, z, back);
            back--;
        }
        depth++;
        my_putchar('\n');
    }
    return back;
}

static void compose_mid_depth(int x, int y, int z, int back)
{
    if (y > 1)
        compose_line_x(x);
    if (back > z - 2 && z > 1 && y > 2) {
        if (back == (z - 2) + 1 + (y - 2))
            my_putchar('|');
        else if (back > (z - 2) + 1)
            put_s_bar();
        else if (back > z - 2)
            put_ds_star();
    } else if (back > 0 && z > 1 && y > 2)
        put_ds_slash();
    else if (y == 2)
        my_putchar('*');
}

static void compose_depth_by_z(int y, int z, int back)
{
    if (back > z - 2 && z > 1) {
        if (back == (z - 2) + 1 + (y - 2))
            my_putchar('|');
        else if (back > (z - 2) + 1) {
            if (z > 2)
                my_putchar(' ');
            my_putchar('|');
        } else if (back > z - 2) {
            if (z > 2)
                my_putchar(' ');
            my_putchar('*');
        }
    } else if (back > 1 && z > 1)
        put_s_slash();
    else if (back > 0 && z > 1)
        my_putchar('/');
}

static void compose_down_depth(int x, int y, int z, int back)
{
    for (int b = 1; b <= y - 2; b++) {
        my_putchar('\n');
        for (int c = 1; c <= x; c++)
            if (c == 1 || c == x)
                my_putchar('|');
            else
                my_putchar(' ');
        compose_depth_by_z(y, z, back);
        back--;
    }
}

int my_parallelepiped(int x, int y, int z)
{
    int back = (z - 2) + (y - 2) + 1;

    if (!(x > 0) || !(y > 0) || !(z > 0))
        return -1;
    if (x == 1 && y == 1 && z == 1) {
        my_putchar('*');
        return 0;
    }

    back = compose_up_depth(x, y, z, back);
    compose_mid_depth(x, y, z, back);
    back--;
    compose_down_depth(x, y, z, back);

    if (y > 1)
        my_putchar('\n');
    compose_line_x(x);

    return 0;
}
