/*
** ETNA PROJECT, 23/10/2020 by meritt_j
** my_sort_params
** File description:
**      Displays put nbr
*/

void my_putstr(const char *str);
void my_putchar(char c);

void my_sort_params(int argc, char **argv)
{
    for (int a = 0; a <= 127; a++) {
        for (int i = 0; i < argc; i++) {
            if (argv[i][0] == a) {
                my_putstr(argv[i]);
                my_putchar('\n');
            }
        }
    }
}
