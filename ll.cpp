#include <iostream>

using namespace std;
struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cout << "Enter the size of the linked list: ";
    cin >> n;
    Node* head = nullptr;
    for (int i = 0; i < n; i++) {
        int data;
        cout << "Enter integer " << i + 1 << ": ";
        cin >> data;

        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
        
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    cout << "The linked list contains: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    struct Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int data;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            struct Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    printf("The linked list contains: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    current = head;
    while (current != NULL) {
        struct Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

