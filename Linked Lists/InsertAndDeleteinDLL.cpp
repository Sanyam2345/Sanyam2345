#include <iostream>
using namespace std;

class Node {
public:
	Node *prev;
	int data;
	Node *next;
}*first= NULL;

void Insert (Node *p,int pos, int x) {
    Node *t;
    if (pos == 0) {
    	if (first!=NULL) {
        	t = new Node;
        	t->data = x;
        	t->next = first;
        	t->prev = NULL;
        	first = t;
    	}
    	else {
    		first = new Node;
    		first->data = x;
    		first->next = first->prev = NULL;
    	}
    }
    else if (pos > 0) {
        for (int i = 0 ;i < pos-1 && p; i++)
            p = p->next;
        if(p) {
            t = new Node;
            t-> data = x;
            t->next = p->next;
            t->prev = p;
            if (p->next)
            	p->next->prev = t;
            p->next = t;
        }
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

int Delete (int pos) {
	Node *p = first;
	int x;
	if(pos == 0) {
		if (p) {
			first = first->next;
			x = p->data;
			delete p;
			if (first)
				first->prev = NULL;
		}
		else {
			cout << "List Not Found" << endl;
		}
	}
	else {
		for (int i = 0; i < pos-1; i++)
				p = p->next;
		p->prev->next = p->next;
		if (p->next)
			p->next->prev = p->prev;
		x = p->data;
		delete p;
	}
	return x;
}

int main () {
	Insert(first,0,1);
	Insert(first,1,2);
	Insert(first,2,3);
	Insert(first,3,4);
	Insert(first,4,5);
	Display();
	cout << Delete(3) << endl;
	Display();
	return 0;
}