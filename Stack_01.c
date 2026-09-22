#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

int isFull();
int isEmpty();
void push(int value);
int pop();
int peek();
void display();

int main() {
    pop();
    push(10);
    push(20);
    push(30);
    display();
    
    printf("Popped = %d\n", pop());
    printf("Top element = %d\n", peek());
    display();
    
    return 0;
}

int isFull() { 
    return (top == MAX - 1);
}

int isEmpty() { 
    return (top == -1);
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed = %d\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("No element to pop\n");
        return -1;
    } else {
        int poppedvalue = stack[top];
        top--;
        return poppedvalue;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

void display() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack Elements: \n");
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

