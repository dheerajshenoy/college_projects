#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head;

void createlist(int n);
void traverselist();

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    createlist(n);
    printf("\nData in the list\n");
    traverselist();
    return 0;
}

void createlist(int n) {
    struct node *newNode, *temp;
    int data;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Unable to allocate memory");
        exit(1);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head -> data = data;
    head -> next = NULL;

    temp = head;
    for (int i=2;i<=n;i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL) {
            printf("Unable to allocate memory");
            exit(1);
        }
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);
        newNode -> data = data;
        newNode -> next = NULL;
        temp -> next = newNode;
        temp = temp -> next;
    }
}

void traverselist() {
    struct node *temp;
    if(head == NULL) {
        printf("List is empty");
        exit(0);
    }
    temp = head;
    while(temp != NULL) {
        printf("Data = %d\n", temp -> data);
        temp = temp -> next;
    }
}
