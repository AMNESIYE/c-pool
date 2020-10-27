/*
** ETNA PROJECT, 24/10/2020 by meritt_j
** my_params_to_array
** File description:
**      switch two string values.
*/

#include "my_struct.h"
#include <stdlib.h>

static int my_strlen(const char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

static char *my_strcpy(char *dest, const char *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++) {
        dest[a] = src[a];
    }

    dest[a] = '\0';

    return dest;
}

static char *my_strdup(const char *str)
{
    int size = my_strlen(str);

    char *new_str = malloc(sizeof(char) * size);

    my_strcpy(new_str, str);

    return new_str;
}

static int is_alpha_num(char str)
{
    if (str >= '0' && str <= '9')
        return 1;

    if (str >= 'A' && str <= 'Z')
        return 1;

    if (str >= 'a' && str <= 'z')
        return 1;

    return 0;
}

static int count_chars(char const *str, int a)
{
    int size_char;
    for (size_char = 0; is_alpha_num(str[a]) == 1; size_char++)
        a++;
    return size_char;
}

static int count_words(const char *str, int size_str)
{
    int count = 0;
    if (is_alpha_num(str[0]) == 1)
        count++;
    for (int i = 1; i < size_str; i++) {
        if (is_alpha_num(str[i]) == 1 && is_alpha_num(str[i - 1]) == 0)
            count++;
    }
    return count;
}

static void set_array(char **final_array, char *word_array, int actual, int b)
{
    word_array[b] = '\0';
    final_array[actual] = word_array;
}

static char **my_str_to_word_array(const char *str)
{
    char **final_array;
    char *word_array;
    int b;
    int actual = 0;
    int size_str = my_strlen(str);
    int number_words = count_words(str, size_str);

    final_array = malloc(sizeof(char) * size_str);
    for (int a = 0; str[a] != '\0' && actual < number_words; a++) {
        word_array = malloc(sizeof(char) * count_chars(str, a));
        for (b = 0; is_alpha_num(str[a]) == 1; b++) {
            word_array[b] = str[a];
            a++;
        }
        if (b > 0) {
            set_array(final_array, word_array, actual, b);
            actual++;
        }
    }
    return final_array;
}

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *param;
    param = malloc(sizeof(*param) * ac);
    for (int i = 0; i < ac; i++) {
        param[i].length = my_strlen(av[i]);
        param[i].str = av[i];
        param[i].copy = my_strdup(av[i]);
        param[i].word_array = my_str_to_word_array(av[i]);
    }
    return param;
}