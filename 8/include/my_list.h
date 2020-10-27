/*
** ETNA PROJECT, 19/10/2020 by meritt_j
** my_list.h
** File description:
**      Header
*/

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} linked_list_t;