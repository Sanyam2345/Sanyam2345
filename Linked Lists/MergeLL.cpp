#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL, *second = NULL, *third = NULL, *last = NULL;

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

void Display (Node *p) {
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void Merge() {
    if (first->data < second->data) {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }
    else {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }
    while (first && second) {
        if (first->data < second->data) {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if (first) {
        last->next = first;
        last = first;
    } else {
        last->next = second;
        last = second;
    }
}

int main () {
    int A[] = {10,30,50,70,90};
    int B[] = {20,40,60,80,100};
    create (A,5);
    create2 (B,5);
    cout << "First LL: ";
    Display(first);
    cout << "Second LL: ";
    Display(second);
    Merge();
    cout << "Merged List: ";
    Display(third);
    return 0;
}