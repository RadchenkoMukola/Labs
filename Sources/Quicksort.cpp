#include "Quicksort.h"

void quicksortel(Listp head)
{
    Listp p;
    Node* left = head;
    Node* right = head->next;

    Node* temp = new Node;


    while (left->next) {
        while (right) {
            if ((left->data) < (right->data)) {
                temp->data = left->data;
                left->data = right->data;
                right->data = temp->data;
            }
            right = right->next;
        }
        left = left->next;
        right = left->next;
    }

}