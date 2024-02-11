#include <iostream>
using namespace std;
class Node {
public:
    Node* right;
    Node* left;
    int value;
    Node(int value) {
        this -> value = value;
        right = nullptr;
        left = nullptr;
    }
};

class Bstree {
public:
    Node* root;

    Bstrees (int value) {
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

};

// Lara H. A B Y 
