/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_print_comb2
** File description:
**      Displays comb2 problem
*/

void my_putchar(char c);

void my_print_comb2(void)
{
    for (int a = '0' ; a <= '9' ; a++) {
        for (int b = '0' ; b <= '9' ; b++) {
            for (int c = '0' ; c <= '9' ; c++) {
                for (int d = '0' ; d <= '9' ; d++) {
                    if (a * 10 + b < c * 10 + d) {
                        my_putchar(a);
                        my_putchar(b);
                        my_putchar(' ');
                        my_putchar(c);
                        my_putchar(d);
                        if (a == '9' && b == '8' && c == '9' && d == '9') {
                            break;
                        }
                        my_putchar(',');
                        my_putchar(' ');
                    }
                }
            }
        }
    }
}