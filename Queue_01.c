#include <stdio.h>

#define SIZE 5
int item[SIZE], front = -1, rear = -1;

void enQueue(int value);
void deQueue();
void display();

int main() {
    deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    display();
    return 0;
}

void enQueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        item[rear] = value;
        printf("Insertion = %d\n", value);
    }
}

void deQueue() {
    if (front == -1) {
        printf("Queue Empty\n");
    } else {
        printf("Deleted = %d\n", item[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue Empty\n");
    } else {
        printf("Elements: ");
        int i;
        for (i = front; i <= rear; i++) {
            printf("%d ", item[i]);
        }
        printf("\n");
    }
}

