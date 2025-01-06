#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
}*first = NULL;

void create (int A[], int n) {
    int i;
    Node *t, *last;
    first = new Node;
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = new Node;
        t -> data = A[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}

Node *Search (Node *p, int key) {
    while (p) {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
}

Node *RSearch (Node *p, int key) {
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

Node *ImprovedSearch (Node *p, int key) {
    Node *q = NULL;
    while (p) {
        if (key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

int main () {
    Node *temp;
    int A[] = {3,5,7,2,1,9,12,34,57};
    create (A,9);
    temp = ImprovedSearch(first,2);
    if (temp)
        cout << "Key is found " << temp->data << endl;
    else 
        cout << "Key not found" << endl;
}