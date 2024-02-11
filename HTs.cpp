#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Node {
public:
    string key;
    int value;
    Node* next;
    Node(string key, int value) {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class HTs {
private:
    static const int size = 7;
    Node* Datamap[size];
public:
    void Print() {
        for (int i = 0; i < size; i++) {
            cout << i << "=" << "\n";
            if (Datamap[i]) {
                Node* temp = Datamap[i];
                while (temp) {
                    cout << "(" << temp->key << "," << temp->value << ")";
                    temp = temp->next;
                }
            }
        }
    }

    int Hash(string key) {
        int hash = 0;
        for (int i = 0; i < key.length(); i++) {
            int ASCII4V = int(key[i]);
            hash = (hash + ASCII4V * 7) % size;
        }
        return hash;
    }

    void Setnodes(string key, int value) {
        int index = Hash(key);
        Node* Newnode = new Node(key, value);
        if (Datamap[index] == nullptr) {
            Datamap[index] = Newnode;
        }
        else {
            Node* temp = Datamap[index];
            while (temp->next != nullptr) {
                temp = temp->next;
            } temp->next - Newnode;
        }
    }

    int Getnode(string key) {
        int index = Hash(key);
        Node* temp = Datamap[index];
        while (temp != nullptr) {
            if (temp->key == key) return temp->value;
            temp = temp->next;
        }
        return 0;
    }

};

// Lara H. A B Y 
