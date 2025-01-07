#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *next;
}*head = NULL;

void Insert (Node *p, int pos, int x) {
	Node *t;
	if (pos == 0) {
		if (head == NULL) {
			head = new Node;
			head->data = x;
			head->next = head;
		}
		else {
			t = new Node;
			t->data = x;
			t->next = head;
			head->next = t;
			head = t;
		}
	}
	else {
		t = new Node;
		for (int i {1}; i < pos; i++)
			p = p->next;
		t->data = x;
		t->next = p->next;
		p->next = t;
	}
}

int Delete(int pos) {
	Node *p = head;
	int x;
	if (pos == 0) {
		if (head) {
			while (p->next != head)
				p= p->next;
			p->next = head->next;
			p = head;
			head = head->next;
			x = p->data;
			delete p;
		}
		else {
			cout << "List Not Found" << endl;
		}
	}
	else {
		Node *q = NULL;
		for (int i {1}; i < pos; i++) {
			p = p -> next;
		}
		q = p->next;
		p->next = q->next;
		x = q->data;
		delete q;
	}
	return x;
}

void Display() {
	Node *p = head;
	do {
		cout << p->data << " ";
		p = p->next;
	}while (p!=head);
	cout << endl;
}

int main () {
	Insert(head,0,2);
	Insert(head,1,4);
	Insert(head,2,6);
	Insert(head,3,8);
	Display();
	cout << Delete(0) << endl;
	Display();
	return 0;
}