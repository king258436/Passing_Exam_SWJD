#include <stdio.h>

#define SIZE 7

int queue[SIZE];
int front = 0, rear = 0;

int checkFull() {
    if ((rear+1)%SIZE==front) {
        return 1;
    }
    return 0;
}

int checkEmpty() {
    if (front == rear) {
        return 1;
    }
    return 0;
}

void enqueue(int value) {
    if (checkFull()) {
        printf("Overflow condition\n");
    } else {
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
    }
}

int dequeue() {
    if (checkEmpty()) {
        printf("Underflow condition\n");
        return 0;
    } 
    else {
        int data = queue[front];
        front = (front + 1) % SIZE;
        return data;
    }
}

void display() {
    int i;

    if (checkEmpty())
        printf("Nothing to dequeue\n");
    else {
        for (i = front+1; i != rear; i = (i + 1) % SIZE) {
            printf("%d \n", queue[i]);
        }
        printf("%d \n\n", queue[i]);
    }
}

int main() {
    enqueue(15);
    enqueue(20);

    display();

    dequeue();

    display();

    dequeue();
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    enqueue(6);
    enqueue(7);  // Overflow condition

    display();

    return 0;
}
