#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
        printf("Queue is Full\n");
    else {
        t -> data = x;
        t -> next = NULL;
        if (front == NULL)
            front = rear = t;
        else {
            rear -> next = t;
            rear = t;
        }
    }
}

int dequeue() {
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else {
        x = front -> data;
        t = front;
        front = front -> next;
        free(t);
    }
    return x;
}

void Display() {
    struct Node *p = front;
    while(p) {
        printf("%d ",p -> data);
        p = p -> next;
    }
}

int isEmpty() {
    return (front == NULL);
}

#endif