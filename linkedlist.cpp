#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Node
{
public :
	int value; 
	Node* next; 
	Node(int value) {

		this->value = value; 
		this->next = nullptr;
	}
};


class LinkedList
{
 private : 

	Node* head;
	Node* tail;
	int length = 0;

 public:

	LinkedList(int value) {
		Node* newnode = new Node(value);
		head = newnode;
		tail = newnode;
		length++;
	}
	~LinkedList () {}
	void append(int vaue) {};
	void prepend(int value) {};
	bool insert(int index, int value) {};
	void printList() {
		Node* temp = head;
		while (temp) {
			cout << temp->value << endl;
			temp = temp->next;
		}
	}
	

};
void main()
{
	LinkedList* LL1st = new Linkedlist(1);


}

//lara.H A B Y 
