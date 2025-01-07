#include <iostream>
using namespace std;

class Node {
public:
	Node *prev;
	int data;
	Node *next;
}*first = NULL;

void create (int A[], int n) {
	Node *t, *last;
	first = new Node;
	first->data = A[0];
	first->next = first->prev = NULL;
	last = first;

	for (int i = 1; i < n; i++) {
		t = new Node;
		t->data = A[i];
		last->next = t;
		t->prev = last;
		last = t;
		t->next = NULL;
	}
}

void Display() {
	Node *p = first;
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

int main () {
	int A[] = {1,2,3,4,5};
	create(A,5);
	Display();
	return 0;
}