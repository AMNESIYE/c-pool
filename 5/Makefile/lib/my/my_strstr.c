/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_strcmp
** File description:
**      switch two string values.
*/

#include "./my.h"

char *my_strstr(char *str, const char *to_find)
{
    if (my_strcmp(str, to_find) <= 0) {
        int size_str = my_strlen(str);
        int size_to_find = my_strlen(to_find);
        int current;
        for (int a = 0; a <= size_str; a++) {
            current = a;
            for (int b = 0; b <= size_to_find; b++) {
                if (str[a] == to_find[b]){
                    a++;
                    if (b == size_to_find)
                        return str;
                }
                else
                    break;
            }
            a = current;
        }
    }
    return 0;
}
