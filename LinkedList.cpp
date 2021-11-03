#include "LinkedList.h"

LinkedList::LinkedList()
{
    _head = nullptr;
    _count = 0;
}

bool LinkedList::insert(int data, int pos)
{
    bool rval = false;

    return rval;
}

int LinkedList::getLength()
{
    return _count;
}


ostream& operator<<(ostream& os, const LinkedList& n) {
    // Pseudocode:
    // 
    // while !(atEnd of list)
    //      cout<< current node's data

    return os;
}