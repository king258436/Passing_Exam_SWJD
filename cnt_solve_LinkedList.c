#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};



struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode ==NULL){
        printf("error\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void printList(struct Node* head){
    struct Node* current = head;
    while(current!=NULL){
        printf("%d ", current->data);
        current=current->next;
    }
}

void insertSorted(struct Node *head,int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct Node* current = head;
        while(current!=NULL){
        }
        current->next=temp;
    }
    return ;
}

int main(){
    struct Node* head = NULL;
    insertSorted(head,10);
    // insertSorted(head,20);
    // insertSorted(head,30);
    // insertSorted(head,40);
    printf("%d",head->data);

    // int value;
    // scanf("%d",&value);
    // insertSorted(head,value);

    // printList(head);
    return 0;
}
