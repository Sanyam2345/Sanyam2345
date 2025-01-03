#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Node *root = NULL;

void BSTCreate() {
    int x = 10;  // Root value
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
}

struct Node * RSearch(struct Node *t, int key) {
    if (t == NULL)
        return NULL;
    if (key == t->data)
        return t;
    else if (key < t->data)
        return RSearch(t->lchild, key);
    else
        return RSearch(t->rchild, key);
}

void Insert(struct Node *t, int key) {
    struct Node *r = NULL, *p;
    while (t != NULL) {
        r = t;
        if (key == t->data)
            return;  // Key already exists, no need to insert
        else if (key < t->data)
            t = t->lchild;
        else 
            t = t->rchild;
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (r == NULL)  // Tree was empty
        root = p;
    else if (key < r->data)
        r->lchild = p;
    else 
        r->rchild = p;
}

void Display(struct Node *root) {
    if (root) {
        Display(root->lchild);
        printf("%d ", root->data);
        Display(root->rchild);
    }
}

int main() {
    BSTCreate();
    Insert(root, 20);
    Insert(root, 30);
    struct Node *temp = RSearch(root, 20);
    if (temp)
        printf("Element %d is found\n", temp->data);
    else 
        printf("Element is not found\n");
    Display(root);
    return 0;
}
