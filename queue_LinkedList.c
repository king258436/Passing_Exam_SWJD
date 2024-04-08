#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;

struct node* rear = NULL;

void enqueue(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    if (front == NULL) {
        front = temp;
        rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }
}

int dequeue() {
    struct node* temp = front;
    int data = front->data;
    front = front->next;
    free(temp);
    return data;
}

void display() {
    for (struct node* p = front; p!= NULL; p = p->next) {
        printf("%d\n", p->data);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    display();
    dequeue();
    dequeue();
    display();

    return 0;
}
