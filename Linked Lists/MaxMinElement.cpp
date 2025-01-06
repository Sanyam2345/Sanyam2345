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

int Max (Node *p) {
    int max = INT_MIN;
    while (p) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int RMax (Node *p) {
    int x = 0;
    if (p == 0)
        return INT_MIN;
    x = RMax(p->next);
    if (x < p->data)
        return p->data;
    else 
        return x;
}

int Min (Node *p) {
    int min = INT_MAX;
    while (p) {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

int RMin (Node *p) {
    int x = 0;
    if (p == 0)
        return INT_MAX;
    x = RMin(p->next);
    if (x > p->data)
        return p->data;
    else 
        return x;
}

int main () {
    int A[] = {3,5,7,9,10,15};
    create(A,6);
    cout << "Max: " << Max(first) << endl;
    cout << "Max: " << RMax(first) << endl;
    cout << "Min: " << Min(first) << endl;
    cout << "Min: " << RMin(first) << endl;
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    return 0;
}