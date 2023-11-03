#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node* createLinkedList(int size) {
    Node *head = NULL, *prevNode = NULL;
    for (int i = 0; i < size; i++) {
        Node *newNode = (Node*) malloc(sizeof(Node));
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &newNode->data);
        if (prevNode != NULL) {
            prevNode->next = newNode;
        }
        if (i == 0) {
            head = newNode;
        }
        prevNode = newNode;
    }
    if (prevNode != NULL) {
        prevNode->next = NULL;
    }
    return head;
    
}
Node *currNode=head;
while (currNode != NULL) {
    Node *nextNode = currNode->next;
    free(currNode);
    currNode = nextNode;
}

int main() {
    int size;
    printf("Enter the size of the linked list: ");
    scanf("%d", &size);
    Node *head = createLinkedList(size);
    // do something with the linked list...
    return 0;
}


