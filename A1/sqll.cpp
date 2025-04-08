#include "sqll.h"

void push(node *&head, int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = nullptr;

    // INSERT AT INDEX 0
    newNode->next = head;
    head = newNode;
}

void pop(node *&head)
{
    if(head == nullptr){
        cout << "Stack is empty, nothing to pop" << endl;
        return;
    }

    // remove the head
    node *dltTemp = head;
    head = head->next;

    delete dltTemp;

}

void enqueue(node *&head, int value) 
{

}
void dequeue(node *&head) 
{

}

void displayList(node *head)
{
    node *walker = head;

    while(walker != nullptr){
        cout << walker->data << " ";
        walker = walker->next;
    }
    cout << endl;
}