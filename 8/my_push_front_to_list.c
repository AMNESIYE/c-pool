/*
** ETNA PROJECT, 26/10/2020 by meritt_j
** my_push_front_to_list
** File description:
**      C function Linked Lists
*/

#include "../include/my_list.h"
#include <stdlib.h>

linked_list_t *my_push_front_to_list(int value, linked_list_t *list)
{
    linked_list_t *temp = malloc(sizeof(linked_list_t));

    temp->data = value;
    temp->next = list;

    list = temp;

    return list;
}