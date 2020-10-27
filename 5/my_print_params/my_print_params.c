/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_print_params
** File description:
**      Displays put nbr
*/

void my_putstr(const char *str);
void my_putchar(char c);

void my_print_params(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}
