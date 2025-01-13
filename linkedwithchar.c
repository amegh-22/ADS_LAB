

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    char data;           // Character data
    struct Node* next;   // Pointer to the next node
};

// Function to create and add a new node to the linked list
void addNode(struct Node** head, char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head; // Insert at the beginning
    *head = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%c -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initialize the head of the list

    // Add nodes to the list
    addNode(&head, 'A');
    addNode(&head, 'B');
    addNode(&head, 'C');

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    return 0;
}
