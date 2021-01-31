#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void push();
void pop();
void peek();
bool isFull();
bool isEmpty();

int STACK[100], n, top = -1, choice;

void main() {
    
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
l22:
    printf("\n\nSelect the operation:\n");
    printf("1.Push\n2.Pop\n3.Peek\n4.IsEmpty\n5.IsFull\nCHOICE: ");
    scanf("%d", &choice);
    switch(choice) {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        default:
            printf("Please enter the correct choice!");
            goto l22;
}
goto l22;
}

bool isEmpty() {
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull() {
    if(top == n)
        return true;
    else
        return false;
}

void push() {
    int data;
    printf("Enter the value to be inserted: ");
    scanf("%d", &data);
    if(isEmpty()) {
        top++;
        STACK[top] = data;
    }
    else
        printf("\nSTACK is full!\n");
}


void pop() {
    if(!isEmpty()) {
        top--;
    }
    else
        printf("\nSTACK is empty!\n");
}

void peek() {
    if(!isEmpty())
        printf("%d\t", STACK[top]);
    else
        printf("\nSTACK IS EMPTY\n");
}
