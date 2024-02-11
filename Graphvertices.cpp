#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Graphs {
private:
    unordered_map<string, unordered_set<string>> Adjlist;
public:
    void Print() {
        for (auto [vertex, edges] : Adjlist) {
            cout << vertex << ": [";
            for (auto edge : edges) {
                cout << edge << " ";
            }
            cout << "]" << "\n";
        }
    }

    bool Addvertex(string vertex) {
        if (Adjlist.count(vertex) == 0) {
            Adjlist[vertex];
            return true;
        } return false;
    }

    bool Addedge(string v1, string v2) {
        if (Adjlist.count(v1) != 0 && Adjlist.count(v2) != 0) {
            Adjlist.at(v1).insert(v2);
            Adjlist.at(v2).insert(v1);
            return true;
        } return false;
    }


    bool Removeedge(string v1, string v2) {

        if (Adjlist.count(v1) != 0 && Adjlist.count(v2) != 0) {
            Adjlist.at(v1).erase(v2);
            Adjlist.at(v2).erase(v1);
             return true;
        } return false;
     }

    bool Removevertex(string vertex) {
        if (Adjlist.count(vertex) == 0) return false;
        for (auto othersv : Adjlist.at(vertex)) {
            Adjlist.at(othersv).erase(vertex);
        }
        Adjlist.erase(vertex);
        return true;
    }
};

int main() {

    return 0;
}

// Lara H. A B Y 
