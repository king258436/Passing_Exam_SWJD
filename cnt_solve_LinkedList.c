#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

void insertSorted(struct Node** headRef, int data) {// 포인터의 주소를 바꾸고 싶다면 이중포인터가 맞음
    struct Node* temp = createNode(data);

    if (*headRef == NULL || (*headRef)->data >= data) {
        temp->next = *headRef;
        *headRef = temp;
    } else {
        struct Node* p = *headRef;
        while (p->next != NULL && p->next->data < data) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

int main() {
    struct Node* head = NULL;
    insertSorted(&head, 10);
    insertSorted(&head, 20);
    insertSorted(&head, 30);
    insertSorted(&head, 40);
    // printf("%d", head->data);

    int value;
    scanf("%d", &value);
    insertSorted(&head, value);

    printList(head);
    return 0;
}
