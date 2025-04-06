#ifndef ll2_H
#define ll2_H

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev; // points to previous node.
};

void insertNode(node *&head, int index, int data);
void deleteNode(node *&head, int index);

#endif