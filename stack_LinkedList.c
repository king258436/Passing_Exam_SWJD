#include <stdio.h>
#include <stdlib.h>

void push(int);

int pop();

void print_s();

typedef struct node {
    int data;

    struct node* next;

} stack;

stack* top = NULL;

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    print_s();
    pop();
    pop();
    print_s();
}

void push(int data) {
    stack *temp = (stack*)malloc(sizeof(stack));
    temp->data=data;
    temp->next=top;
    top = temp;
}

// 여기에 코드를 완성하시오.
int pop() {
    stack *temp = top;
    int data = temp->data;
    top=temp->next;
    free(temp);
    return data;
}

// 여기에 코드를 완성하시오.
void print_s() {
    for(stack *p=top;p!=NULL;p=p->next){
        printf("%d\n",p->data);
    }
    printf("\n");
}
