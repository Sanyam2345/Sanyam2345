#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
}*first = NULL;

void Create(int A[], int n) {
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i {1}; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void InsertSorted(int x) {
    Node * p = first;
    Node * q = NULL;
    Node *t;
    while (p && p->data < x) {
        q = p;
        p = p-> next;
    }
    t = new Node;
    t->data = x;
    t->next = q->next;
    q->next = t;
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
    int A[] {10,20,30,40,50};
    Create(A,5);
    Display();
    InsertSorted(35);
    Display();
    return 0;
}