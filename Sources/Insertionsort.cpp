#include "Insertionsort.h"

void sortedInsert(struct Node** head_ref, Listp new_node)
{
    Listp current;
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->next != NULL &&
            current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void insertionsortel(struct Node** head_ref)
{
    Listp sorted = NULL;
    Listp current = *head_ref;
    while (current != NULL)
    {
        Listp next = current->next;
        sortedInsert(&sorted, current);
        current = next;
    }

    *head_ref = sorted;
}