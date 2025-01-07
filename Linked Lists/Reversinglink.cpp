#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL;

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

void Reverse(Node *p) {
    Node *q = NULL;
    Node *r = NULL;
    while (p) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void RReverse (Node *q, Node *p) {
    if (p) {
        RReverse(p,p->next);
        p->next = q;
    }
    else 
        first = q;
}

int main () {
    int A[] = {1,2,3,4,5};
    create (A,5);
    Display(first);
    Reverse(first);
    Display(first);
    RReverse(NULL,first);
    Display(first);
    return 0;
}