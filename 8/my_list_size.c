/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_list_size
** File description:
**      C function Linked Lists
*/

#include "../include/my_list.h"

#define NULL 0

int my_list_size(const linked_list_t *list)
{
    int size;
    const linked_list_t *temp = list;

    for (size = 0; temp !=
                   NULL; size++)
        temp = temp->next;
    return size;
}