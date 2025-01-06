#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
}*first = NULL;

void Insert (Node *p,int pos, int x) {
    Node *t;
    if (pos == 0) {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0) {
        for (int i = 1 ;i < pos && p; i++)
            p = p->next;
        if(p) {
            t = new Node;
            t-> data = x;
            t->next = p->next;
            p -> next = t;
        }
    }
}

void Display (Node *p) {
    while (p) {
        cout << p->data << " ";
        p = p -> next;
    }
    cout << endl;
}

int main () {
    Insert (first,0,1);
    Insert (first,1,5);
    Insert (first,2,8);
    Insert (first,3,10);
    Insert (first,4,3);
    Insert (first,5,7);
    Insert (first,6,6);
    Display(first);
    return 0;
}