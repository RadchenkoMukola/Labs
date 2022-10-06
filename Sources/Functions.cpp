#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

Listp Head(int n)
{
    Listp p = NULL;Listp q = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p = new Listn;
        p->data = x;
        p->next = q;
        q = p;
    }
    return p;
}
void printlist(Listp root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }
}

void del(Listp head)
{
    Listp p;
    while (head)
    {
        p = head;
        head = head->next;
        delete p;
    }
}

int maxel(Listp head)
{
    Listp p = head;
    int x = -100000;
    while (p)
    {
        if (p->data > x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}

int minel(Listp head)
{
    Listp p = head;
    int x = 1000000;
    while (p)
    {
        if (p->data < x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}

Listp reverse(Listp list)
{
    Listp reversed_list = NULL;

    for (Listp node = list, next_node; node != NULL; node = next_node)
    {
        next_node = node->next;
        node->next = reversed_list;
        reversed_list = node;
    }

    return reversed_list;
}