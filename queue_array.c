#include <stdio.h>

#define SIZE 100

void enqueue(int n);

int dequeue();

void show();

int inp_arr[SIZE];

int Rear = -1;

int Front = -1;

int main()

{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    show();

    dequeue();
    dequeue();
    show();

}

void enqueue(int n)

{
    inp_arr[++Rear]=n;
}

int dequeue()

{
    ++Front;
    return 0;
}

void show() {
    for(int i=Front+1;i<=Rear;i++){
        printf("%d\n",inp_arr[i]);
    }
    printf("\n");
}
