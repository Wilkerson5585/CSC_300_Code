#include "array.h"

ArrayList::ArrayList(int cap)
{
    capacity = cap;
    size = 0;
    arr = new int[capacity];
}

ArrayList::~ArrayList()
{
    delete[] arr;
}

void ArrayList::insert(int value)
{
    if (size == capacity)
    {
        cout << "sorry array is full" << endl;
        return;
    }
}
