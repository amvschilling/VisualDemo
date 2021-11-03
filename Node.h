#pragma once

#include <ostream>

using namespace std;

class Node
{

private:
		int _data;
		Node* _next;

public:
	Node(int i);
	Node(int i, Node* next);

	void setData(int i);
	int getData();

	void setNext(Node* next);
	Node* getNext();

	friend ostream& operator<<(ostream& os, const Node& n);   // let the output stream see the Dolphin's private data

};

