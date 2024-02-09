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

class Stack {
private :
Node * top;
int height;
public :
stack (int value){
  Node * Newnode = new Node (value);
  top = Newnode ;
  height = 1;
  }
void Push (int value){
  Node * Newnode = new Node (value);
  if (height == 0) 
    top = Newnode ; 
  else {
    Newnode -> next = top;
    top = Newnode;
  }
}
void Printstack (){
  Node * temp = top;
  while (temp){
    cout << temp -> value << "  ";
    temp = temp -> next ;
  }
}

};
