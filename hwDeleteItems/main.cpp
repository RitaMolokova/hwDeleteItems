#include "ForwardList.h";
#include <iostream>
using namespace std;

int main()
{
	ForwardList list;
	list.push_back(2);
	list.push_front(1);
	list.push_back(3);

	Node* head = list.head;
	list.insert_after(head, 3);

	list.print();
	list.clear();
	list.print();
}