/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_print_comb
** File description:
**      Displays comb problem
*/

void my_putchar(char c);

void my_print_comb(void)
{
    for (int a = '0' ; a <= '9' ; a++) {
        for (int b = '0' ; b <= '9' ; b++) {
            if (b != a && b > a) {
                for (int c = '0' ; c <= '9' ; c++) {
                    if (c != b && c != a && c > b) {
                        my_putchar(a);
                        my_putchar(b);
                        my_putchar(c);
                        if (a == '7' && b == '8' && c == '9') {
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