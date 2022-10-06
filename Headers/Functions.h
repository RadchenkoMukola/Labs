#ifndef INCLUDED_Functions_H
#define INCLUDED_Functions_H

#include "List.h"

Listp Head(int n);

void printlist(Listp root);


void del(Listp head);


int maxel(Listp head);


int minel(Listp head);


Listp reverse(Listp list);

#endif