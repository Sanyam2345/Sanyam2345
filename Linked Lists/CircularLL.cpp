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

	for (int i {1}; i < n; i++) {
		t = new Node;
		t->data = A[i];
		last->next = t;
		last = t;
	}
	last->next = first;
}

void Display () {
	Node *p = first;
	do {
		cout << p->data << " ";
		p = p->next;
	}while (p != first);
	cout << endl;
}

int main () {
	int A[] = {2,4,6,8,10};
	create (A,5);
	Display();
	return 0;
}