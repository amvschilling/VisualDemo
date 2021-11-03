#include "Node.h"

Node::Node(int i)
{
	_data = i;
	_next = nullptr;
}

Node::Node(int i, Node* next)
{
	_data = i;
	_next = next;
}

void Node::setData(int i)
{
	_data = i;
}

int Node::getData()
{
	return _data;
}

void Node::setNext(Node* next)
{
	_next = next;
}

Node* Node::getNext()
{
	return _next;
}

ostream& operator<<(ostream& os, const Node& n) {

	os << "\n data: " << n._data << endl;;
	
	return os;
}