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

bool isSorted(Node *p) {
	int x = INT_MIN;
	while (p) {
		if (p->data < x)
			return false;
		x = p->data;
		p = p->next;
	}
	return true;
}

int main () {
	int A[] = {2,5,7,3,4,9};
	create(A,6);
	cout << boolalpha;
	cout << isSorted(first) << endl;
	return 0;
}
