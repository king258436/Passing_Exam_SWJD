#include<stdio.h>

#define SIZE 100

int stack[SIZE], choice, top;

void push(int x);

int pop(void);

void display(void);


int main() {
    top = -1;
    printf("sdfdsf");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
    pop();
    pop();
    display();


    return 0;
}

void push(int x) {
    stack[top++] = x;
}

int pop() {
    top--;
}

void display() {
    for (choice = top; choice >= 0; choice--) {
        printf("%d\n", choice);
    }
}
