/*
** ETNA PROJECT, 26/10/2020 by meritt_j
** my_find_node
** File description:
**      C function Linked Lists
*/

#include "../include/my_list.h"

#define NULL 0

linked_list_t *my_find_node(linked_list_t *list, const int data_ref)
{
    linked_list_t *temp = list;

    while (temp != NULL) {
        if (temp->data == data_ref) {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}