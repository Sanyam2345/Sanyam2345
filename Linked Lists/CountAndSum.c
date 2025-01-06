#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*first = NULL;

void create (int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next= NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t -> data = A[i];
        t -> next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

int count (struct Node *p) {
    int c = 0;
    while (p != NULL) {
        c++;
        p = p->next;
    }
    return c;
}

int Rcount (struct Node *p) {
    if (p == NULL) {
        return 0;
    }
    return Rcount(p->next) + 1;
}

int Add(struct Node *p) {
    int sum = 0;
    while (p != NULL) {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RAdd (struct Node *p) {
    if (p == NULL) {
        return 0;
    }
    return RAdd(p->next) + p -> data;;
}

int main () {
    int A[] = {3,5,7,10,15};
    create (A,5);
    printf("Count: %d\n", count(first));
    printf("RCount: %d\n", Rcount(first));
    printf("Sum: %d\n", Add(first));
    printf("RSum: %d\n", RAdd(first));
    return 0;
}
