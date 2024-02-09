#include <iostream>
using namespace std ;
class Node {
public : 
int value ;
Node * next ;
 Node (int value){
   this -> value = value ;
   next = nullptr;
  }
};

class Queue {
private : 
Node * first ;
Node * last ;
int length = 0 ;
Queue (int value) {
  Node * Newnode = new Node (value);
  first = Newnode ;
  last = Newnode ;
  length ++;
  }


void Enqueue (int value) {
  Node * Newnode = new Node (value);
  if (length == 0) {
    first = Newnode;
    last = Newnode ;
  } else {
    last -> next = Newnode ;
    last = Newnode ;
    }
  length++;
}

void Dequeue () {
  if (length == 0) return;
  Node * temp = first ;
  if (length == 1){
    first = nullptr;
    last = nullptr;
  } else {
    first = first -> next ;
  } 
  delete temp ;
  length --;
  return ;
  }
}; // Lara H. A B Y 
