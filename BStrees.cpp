#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    Node* right;
    Node* left;
    int value;
    Node(int value) {
        this->value = value;
        right = nullptr;
        left = nullptr;
    }
};

class Bstree {
public:
    Node* root;

    Bstrees(int value) {
        root = nullptr;
    }
    bool Insertnode(int value) {
        Node* Newnode = new Node(value);
        if (root == nullptr) {
            root = Newnode;
            return true;
        } Node* temp = root;
        while (true) {
            if (Newnode->value == temp->value) return false;
            if (Newnode->value < temp->value) {
                if (temp->left == nullptr) {
                    temp->left = Newnode;
                    return true;
                }
                temp = temp->left;
            }
            else {
                if (temp->right == nullptr) {
                    temp->right = Newnode;
                    return true;
                }
                temp = temp->right;
            }
        }
    }

    bool Contains(int value) {
        Node* temp = root;
        while (temp) {
            if (value < temp->value) {
                temp = temp->left;
            }
            else if (value > temp->value) {
                temp = temp->right;
            }
            else {
                return true;
            }
        }
        return false;
    }




    void Bredthsearch() {
        queue<Node*> SQ;
        SQ.push(root);

        while (SQ.size() > 1) {
            Node* thisnode = SQ.front();
            SQ.pop();
            cout << thisnode->value << " ";
            if (thisnode->left) {
                SQ.push(thisnode->left);
             } if (thisnode->right) {
                SQ.push(thisnode->right);
            }

        } 

    }


    void Depthsearchpre(Node * thisnode){
        cout << thisnode->value << "  ";
        if(thisnode->left){
            Depthsearchpre(thisnode->left);
        }  if(thisnode->right){
            Depthsearchpre(thisnode->right);
            }

    } void Depthsearchpre() { Depthsearchpre(root); }


    void Depthsearchpost(Node* thisnode) {
        if (thisnode->left) {
            Depthsearchpost(thisnode->left);
        }  if (thisnode->right) {
            Depthsearchpost(thisnode->right);
        } cout << thisnode->value << "  ";
    } void Depthsearchpost() { Depthsearchpost(root); }


    void Depthsearchin(Node* thisnode) {
        
        if (thisnode->left) {
            Depthsearchin(thisnode->left);
        } cout << thisnode->value << "  ";
         if (thisnode->right) {
            Depthsearchin(thisnode->right);
        }
    } void Depthsearchin() { Depthsearchin(root); }



};

// Lara H. A B Y 
