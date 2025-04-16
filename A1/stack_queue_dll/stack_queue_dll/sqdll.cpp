#include "sqdll.h"

void enqueueFront(node *&head, node *&tail, int value)
{
    // Create the node to be inserted at the front
    node *newNode = new node;
    newNode->data = value;
    newNode->next = head;    // newNode points to first element in the list
    newNode->prev = nullptr; // no prior elements befor newNode

    // If the deque is emtpty, then newNode also becomes both the head and the tail
    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    { // If not empty, just make newNode the head
        head->prev = newNode;
        head = newNode;
    }
}

void enqueueBack(node *&head, node *&tail, int value)
{

    node *newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = tail;

    // if empty make new node the head and tail.
    if (tail == nullptr)
    {
        head = tail = newNode;
    }

    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void dequeueFront(node *&head, node *&tail)
{
    if (head == nullptr)
    {
        cout << "Deque is empty, nothing to dequeue from the front." << endl;
        return;
    }

    node *dltTemp = head;

    head = head->next;

    if (head == nullptr)
    {
        tail = nullptr;
    }
    else
    {
        head->prev = nullptr;
    }

    delete dltTemp;
}

void dequeueBack(node *&head, node *&tail)
{
    if (tail == nullptr)
    {
        cout << "Deque is empty, nothing to dequeue from the back." << endl;
        return;
    }

    node *dltTemp = tail;

    tail = tail->prev;

    if (tail == nullptr)
    {
        head = nullptr;
    }
    else
    {
        tail->next = nullptr;
    }

    delete dltTemp;
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
