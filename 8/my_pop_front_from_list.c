/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_pop_front_to_list
** File description:
**      C function Linked Lists
*/

#include "../include/my_list.h"
#include <stdlib.h>

linked_list_t *my_pop_front_from_list(linked_list_t *list)
{
    linked_list_t *temp = list;

    list = list->next;

    free(temp);

    return list;
}