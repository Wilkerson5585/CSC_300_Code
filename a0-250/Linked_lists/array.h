#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class ArrayList
{
private:
    int *arr;
    int capacity;
    int size;

public:
    ArrayList(int cap);
    ~ArrayList();

    void insert(int value);
    void remove(int index);
    int search(int value);
    void display();
};

#endif