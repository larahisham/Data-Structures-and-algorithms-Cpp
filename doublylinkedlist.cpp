#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
class Node
{
public:
	int value;
	Node* next;
  Node* last;

	Node(int value) {
		this->value = value; 
	  this ->	next = nullptr; 
    this -> last = nullptr;
	}

};


class DoublyLL {
private :
Node * head;
Node * tail;
int length = 0;
public :
DoublyLL(int value){
Node * Newnode = new Node (value);
head = Newnode;
tail = Newnode;
++length;
}

void append (int value){
Node * Newnode = new Node (value);
  if (length == 0) {
    head = Newnode;
    tail = Newnode;
  } else {
    tail -> next = newnode;
    Newnode -> last = tail ;
    tail = Newnode;
  }
  ++length;
}

void Deletelast (){
  if (length == 0) return;
Node * temp = tail ;
  if (length == 1) {
    head = nullptr;
    tail = nullptr;
  } else {
  tail = tail -> last ; 
  tail -> next = nullptr ;
  }
  delete temp ;
  --length;
}

void prepend (int value){
  Node * Newnode = new Node (value);
  if (length == 0){
    head = Newnode;
    tail = Newnode;
  } else {
    Newnode - > next = head ;
    head - > last = Newnode;
    head = Newnode;
  }
  ++length;
}

void Deletefirst (){
  if (length == 0) return ;
  Node * temp = head ;
  if (length == 1){
    head = nullptr;
    tail = nullptr;
  } else {
    head = head -> next ;
    head - > last = nullptr;
    temp -> next = nullptr;
  }
  delete temp;
  --length;
}

Node * retrievenode (int index) {
  if (index < 0 || index >= length) return nullptr;
  Node * temp = head ;
  if (index < length/2){
  for (int i = 0 ; i < index ; i++){
    temp = temp -> next;
    } 
  } else {
    temp = tail ;
    for (int i = length - 1 ; i > index ; i --){
      temp = temp - > last ;
    }
  }
  return temp ;
}

bool setvalue(int index , int value) {
Node * temp = retrievenode (index);
if (temp){
temp -> value = value;	
	return true;
  }
	return false;
}

bool insertnode (int index , int value) {
Node * Newnode = new Node (value);
	if (index < 0 || index > length) return false ;
	if (index == 0){
		prepend(value);
		return true;
	} if (index == length){
		append (value);
		return true;
	} 
	Node * before =  retrievenode (index - 1);
	Node * after = before - > next;
	Newnode -> last = before ;
	Newnode -> next = after ;
	before -> next = Newnode;
	after -> last = Newnode;
	++length;
	return true;
}
void Deletenode (int index) {
	if (index < 0 || index >= length) return;
	if (index == 0) return Deletefirst ();
	if (index == length - 1) return Deletelast();
	Node * temp = retrievenode (index);
	temp -> next -> last = temp -> last ;
	temp -> last -> next = temp -> next ;
	delete temp ;
	--length; 
   }
};
