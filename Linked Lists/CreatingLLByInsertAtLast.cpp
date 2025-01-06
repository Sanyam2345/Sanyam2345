#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
}*first = NULL;
Node *last {first};

void InsertLast(int x) {
    Node *t {new Node};
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = last = t;
    else {
        last->next = t;
        last = t;
    }
}

void Display() {
    Node *p {first};
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main () {
    InsertLast(10);
    InsertLast(20);
    InsertLast(30);
    InsertLast(40);
    InsertLast(50);
    InsertLast(60);
    InsertLast(70);
    Display();
    return 0;
}