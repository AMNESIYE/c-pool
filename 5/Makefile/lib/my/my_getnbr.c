/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_getnbr
** File description:
**      Get numbers in string
*/

#include "./my.h"

int change_result_first(int a, int result, const char *str, int *position)
{
    result = str[a] - '0';
    *position = 10;

    if (str[a - 1] == '-')
        result *= (-1);

    return result;
}

int change_result_again(int a, int result, const char *str,
                        int
                        *position)
{
    result = result * *position + (str[a] - '0');
    *position *= 10;

    return result;
}

int my_getnbr(const char *str)
{
    int size = my_strlen(str);
    int result = 0;
    int position = 0;
    int result_test;

    for (int a = 0; a < size; a++) {
        if (str[a] >= '0' && str[a] <= '9') {
            if (position == 0)
                result = change_result_first(a, result, str, &position);
            else {
                result_test = result;
                result = change_result_again(a, result, str,
                                             &position);
                if (result_test > result)
                    return 0;
            }
        } else if (position > 0)
            break;
    }
    return result;
}
