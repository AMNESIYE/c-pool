/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_sort_intarr
** File description:
**      Sort arrays
*/

void my_putchar(char c);

int check_int(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}

void my_sort_intarr(int *array, int size)
{
    for (int a = 0; a < size - 1; a++) {
        while (check_int(array[a], array[a + 1]) == 1) {
            for (int c = 0; c < size - 1; c++) {
                if (array[c] > array[c + 1]) {
                    int b = array[c];
                    array[c] = array[c + 1];
                    array[c + 1] = b;
                }
            }
            a = 0;
        }
    }
}
