#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL;

void create(int A[], int n) {
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

void removeDuplicates(Node *p) {
    Node *q = p->next;
    while (q) {
        if (p->data != q->data) {
            p = q;
            q = q ->next;
        } else {
            p -> next = q -> next;
            delete q;
            q = p -> next;
        }
    }
}

void Display(Node *p) {
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main () {
    int A[] = {3,3,3,3,5,6,5,5,7,8};
    create (A,10);
    removeDuplicates(first);
    Display(first);
    return 0;
}