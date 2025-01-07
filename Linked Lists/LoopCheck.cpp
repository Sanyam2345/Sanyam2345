#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class LinkedLists {
    private:
    Node *first;
    public:
    LinkedLists() { first = NULL; }
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
        last->next = first;
    }

    void Display () {
        Node *p = first;
        while (p) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    int isLoop() {
        Node *p = first;
        Node *q = first;
        do {
            p = p->next;
            q = q ? q->next : NULL;
            q = q ? q->next : NULL;
        } while (p && q && p != q);
        return p == q ? true : false;
    }
};

int main () {
    int A[] = {1,2,3,4,5};
    LinkedLists L;
    L.create(A,5);
    // L.Display();
    cout << boolalpha;
    cout << L.isLoop() << endl;
    return 0;
}