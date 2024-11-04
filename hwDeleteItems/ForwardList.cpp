#include "ForwardList.h"
#include <iostream>
using namespace std;

void ForwardList::push_back(int value)
{
	Node* new_node = new Node(value);
	if (!head){
		head = new_node;
	}
	if (tail){
		tail->next = new_node;
	}
	tail = new_node;
}

void ForwardList::print()
{
	Node* current = head;
	while (current){
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

void ForwardList::push_front(int value)
{
	Node* new_node = new Node(value);
	new_node->next = head;
	head = new_node;

	if (!tail){
		tail = head;
	}
}

void ForwardList::insert_after(Node* before, int value)
{
	if (before == nullptr) return;

	Node* new_node = new Node(value);
	new_node->next = before->next;
	before->next = new_node;

	if (before == tail){
		tail = new_node;
	}
}

void ForwardList::clear()
{
	Node* current = head;
	while (current){
		Node* temp = current;
		current = current->next;
		delete temp;
	}
	head = nullptr;
	tail = nullptr;
}
