#include "ll.h"

void insertNode(node *&head, int index, int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->next = nullptr;

    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        node *walker = head;
        int wIndex = 0;
        while (walker != NULL && wIndex < index - 1)
        {
            walker = walker->next;
            wIndex++;
        }
        if (walker == nullptr)
        {
            cout << "Index is too large, can't insert" << endl;
            return;
        }
        else
        {
            newNode->next = walker->next;
            walker->next = newNode;
        }
    }
}

void deleteNode(node *&head, int index)
{
    // Check if the list is empty and there's nothing to delete

    if (head == nullptr)
    {
        cout << "nothing here, boss" << endl;
        return;
    }

    // Check if were are deleting at index 0 and handle accordingly
    if (index == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    // Handle other index deletions
    else
    {
        node *walker = head;
        int wIndex = 0;
        while (walker != nullptr && wIndex < index - 1)
        {
            walker = walker->next;
            wIndex++;
        }
        if (walker == nullptr || walker->next == nullptr)
        {
            cout << "index is too large or invalid, no can do." << endl;
            return;
        }
        node *temp = walker->next;
        walker->next = temp->next;
        delete temp;
    }
}

void displayList(node *head)
{
    node *walker = head;

    while (walker != nullptr)
    {
        cout << walker->data << " ";
        walker = walker->next;
    }
    cout << endl;
}
