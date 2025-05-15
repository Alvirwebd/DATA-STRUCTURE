#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node* link;

    Node(int val) {
        info = val;
        link = nullptr;
    }
};

void insertSorted(Node*& start, int val) {
    Node* newNode = new Node(val);

    // Case 1: insert at the beginning or into empty list
    if (start == nullptr || val < start->info) {
        newNode->link = start;
        start = newNode;
        return;
    }

    // Case 2: insert in the middle or end
    Node* ptr = start;
    while (ptr->link != nullptr && ptr->link->info < val) {
        ptr = ptr->link;
    }

    newNode->link = ptr->link;
    ptr->link = newNode;
}

void printList(Node* start) {
    Node* ptr = start;
    while (ptr != nullptr) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Node* start = nullptr;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertSorted(start, val);
    }

    printList(start);
    return 0;
}
//6
//30 10 40 20 35 5
