#include "ll2.h"

void insertNode(node *&head, int index, int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (index == 0)
    {
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        head = newNode;
    }
    else
    {
        node *walker = head;
        int wIndex = 0;
        while (walker != nullptr && wIndex < index - 1)
        {
            walker = walker->next;
            wIndex++;
        }
        if (walker == nullptr)
        {
            cout << "Index is too large, can't insert" << endl;
            delete newNode;
            return;
        }
        else
        {
            newNode->next = walker->next;
            newNode->prev = walker;
            if (walker->next != nullptr)
            {
                walker->next->prev = newNode;
            }
            walker->next = newNode;
        }
    }
}

void deleteNode(node *&head, int index)
{
    if (head == nullptr)
    {
        cout << "The list is empty, nothing to delete" << endl;
        return;
    }

    if (index == 0)
    {
        node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr; // Update the previous pointer of the new head
        }
        delete temp;
        return;
    }

    node *walker = head;
    int wIndex = 0;
    while (walker != nullptr && wIndex < index - 1)
    {
        walker = walker->next;
        wIndex++;
    }

    if (walker == nullptr || walker->next == nullptr)
    {
        cout << "Index is too large, can't delete" << endl;
        return;
    }

    node *temp = walker->next;
    walker->next = temp->next;
    if (temp->next != nullptr)
    {
        temp->next->prev = walker;
    }
    delete temp;
}