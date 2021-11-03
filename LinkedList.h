#pragma once

#include "Node.h"
class LinkedList
{

private:
	Node* _head;
	int _count;


public:
	LinkedList();

	/*
	* This will insert data into the linked list so that 
	* it is at position pos in the list.  If this is not possible,
	* false is returned.  True if otherwise
	*/
	bool insert(int data, int pos);

	int getLength();

	friend ostream& operator<<(ostream& os, const LinkedList& n);

};

