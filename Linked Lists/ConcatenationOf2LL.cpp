#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL, *second = NULL;

void create (int A[], int n) {
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i=1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display (Node *p) {
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void create2 (int A[], int n) {
    Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (int i=1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Concatenate(Node *p, Node *q) {
    while (p->next)
        p = p->next;
    p->next = second;
    second = NULL;
}

int main () {
    int A[] = {1,2,3,4,5};
    int B[] = {6,7,8,9,10};
    create(A,5);
    create2(B,5);
    Display(first);
    Display(second);
    Concatenate(first,second);
    Display(first);
    return 0;
}