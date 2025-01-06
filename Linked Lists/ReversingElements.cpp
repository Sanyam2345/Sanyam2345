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

void ReverseElements(Node *p, int A[]) {
    int i = 0;
    while (p) {
        A[i] = p->data;
        p = p->next;
        i++;
    }
    p = first; i--;
    while (p) {
        p -> data = A[i--];
        p = p->next;
    }
}

int main () {
    int A[] = {3,5,7,9,2};
    create(A,5);
    int B[5];
    ReverseElements(first, B);
    Display(first);
    return 0;
}