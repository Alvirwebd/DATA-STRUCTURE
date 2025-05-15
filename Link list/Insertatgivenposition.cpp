#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node *link;

    Node(int info) {
        this->info = info;
        this->link = NULL;
    }
};

void insertAtstart(Node *&start, int val) {
    Node *newNode = new Node(val);
    newNode->link = start;
    start = newNode;
}

void insertAtlist(Node *&start, int pos, int item)//aikane refference use kora hoise jate start er value change hoye jabe
//start is passed by reference so that it can be modified in the function
{
    if (pos < 1) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        insertAtstart(start, item);
        return;
    }

    Node *ptr = start;
    for (int i = 0; i < pos - 2; i++) {
        if (ptr == nullptr) {
            cout << "Invalid position\n";
            return;
        }
        ptr = ptr->link;
    }

    if (ptr == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node *newnode = new Node(item);
    newnode->link = ptr->link;
    ptr->link = newnode;
}

void printlist(Node *start) {
    Node *ptr = start;
    while (ptr != NULL) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
}

int main() {
    int n;
    cin >> n;
    Node *start = nullptr;

    for (int i = 0; i < n; i++) {
        int item, pos;
        cin >> item >> pos;
        insertAtlist(start, pos, item);
    }

    printlist(start);
    return 0;
}
//4
//10 1
//20 2
//30 3
//40 3
// output : 10 20 40 30