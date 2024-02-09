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
    Newnode -> next = top;
    top = Newnode;
  height++;
}
void pop (){
 Node * temp = top ;
 if (height == 0) return ;
  top = top -> next ;
  delete temp;
 height --;
}
void Printstack (){
  Node * temp = top;
  while (temp){
    cout << temp -> value << "  ";
    temp = temp -> next ;
  }
}

};
// Lara H. A B Y 
