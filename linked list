#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Node
{
public :
	int value; // template 
	Node* next; 
	Node(int value) {

		this->value = value; // " this->value " means "value" that member of the Node class
		this->next = nullptr; // next = nullptr is correct as well
	}
};


class LinkedList
{
 private : // we don't have to write it cus the class are private by default 

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
	// to creat our first node 
	void append(int vaue) {};
	// to creat new node and add it to the end
	void prepend(int value) {};
	// to creat new node and add it to the beginning
	bool insert(int index, int value) {};
	// to creat a new node and insert it at a particular index
	void printList() {
		Node* temp = head;
		while (temp) {
			// it's true as well as a temp is pointing to smth, we may just say "while (temp!= nullptr)"
			cout << temp->value << endl;
			temp = temp->next;
		}
	}
	/* to retrieve
	void getHead() {};
	void getTail() {};
	void getLength() {};
	void getItem(){};
	*/

};
void main()
{
	LinkedList* LL1st = new Linkedlist(1);


}

//lara.H A B Y 
