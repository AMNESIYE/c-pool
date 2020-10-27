/*
** ETNA PROJECT, 26/10/2020 by meritt_j
** my_delete_nodes
** File description:
**      C function Linked Lists
*/

#include "../include/my_list.h"
#include <stdlib.h>

linked_list_t *sub_delete(linked_list_t **list, const int data_ref)
{
    linked_list_t *temp = *list;

    while (temp->next && temp->data == data_ref) {
        temp = temp->next;
    }

    return temp;
}

void my_delete_nodes(linked_list_t **list, const int data_ref)
{
    linked_list_t *temp;
    linked_list_t *previous = *list;
    linked_list_t *first_loop = *list;
    linked_list_t *second_loop = (*list)->next;
    *list = sub_delete(list, data_ref);

    while (first_loop) {
        while (second_loop && second_loop->data != data_ref) {
            previous = second_loop;
            second_loop = second_loop->next;
        }
        if (!second_loop) {
            first_loop = first_loop->next;
            if (first_loop)
                second_loop = first_loop->next;
        } else if (second_loop->data == data_ref) {
            previous->next = second_loop->next;
            temp = second_loop;
            second_loop = second_loop->next;
            free(temp);
        }
    }
}