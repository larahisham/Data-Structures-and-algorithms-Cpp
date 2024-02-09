#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
	Node(int value) {

		this->value = value; 
		this->next = nullptr; 
	}
};


class LinkedList
{
private:  

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
	
	~LinkedList() {
		Node* temp = head;
		while (head) {
			// head == head != nullptr as well 
			head = head->next;
			delete temp;
			temp = head;

		}
		}


	void append(int value) {
		Node* newnode = new Node(value);
		if (length == 0) {
			head = newnode;
			tail = newnode;
		
		}
		else {

			tail->next = newnode;
			tail = newnode;

		}
		length++;
	}
	
	bool DeleteLast() {

		if (length == 0) return false;

		Node* temp = head;
		if (length == 1) {
			head = nullptr;
			tail = nullptr;
		}
		else {
			Node* pre = head;
			while (temp->next) {
				pre = temp;
				temp = temp->next;
			}
			tail = pre;
			tail->next = nullptr;
		}
		delete temp;
		length--;
		return true;

	} 
	void prepend(int value) {
		Node* newnode = new Node(value);
		if (length == 0){
			head = newnode;
		    tail = newnode;
	     }
		  else {
			newnode->next = head;
			head = newnode;
		   }
		length++;
	}
	
	bool DeleteFirst() {
		Node* temp = head;
		if (length == 0) return false;

	    if (length == 1){
				head = nullptr;
				tail = nullptr;
		}
		else {
			head = head->next;
		}
			delete temp;
			length--;
			return true;
	} 
	Node* retrievenode(int index)
	{
		if (index < 0 || index >= length) return nullptr;
		Node* temp = head;
		for (int i = 0; i < index; i++) temp = temp->next;

		return temp;

	}

	bool setvalue(int index, int value) {
		Node* temp = retrievenode(index);
		if (temp) {
			temp->value = value;
			return true;
		}
		return false;
	}

	bool insertnode (int index, int value) {
		if (index < 0) return false;
		if (index == 0) {
			prepend(value);
			length++;
			return true;
		}
		if (index == length)
		{
			append(value);
			length++;
			return true;
		}
		Node* newnode = new Node(value);
		Node* temp = retrievenode(index - 1);
		newnode->next = temp->next;
		temp->next = newnode;
		length++;
		return true;
	}

	bool Deletenode(int index) {
		if (index < 0 || index >= length) return false;
		if (index == 0) return DeleteFirst();
		if (index == length - 1) return DeleteLast();
		Node* pre = retrievenode(index - 1);
		Node* temp = pre->next;
		pre->next = temp->next;
		delete temp;
		length--;
		return true;
	}

	void reverseLL() {
		Node* temp = head;
		head = tail;
		tail = temp;
		Node* after = temp->next;
		Node* before = nullptr;
		for (int i = 0; i < length; i++) {
			after = temp->next;
			temp->next = before;
			before = temp;
			temp = after;
		}
	}

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


}

//lara.H A B Y 
