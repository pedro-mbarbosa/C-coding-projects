#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int value;              
    struct Node* next;
} Node;

void AddValue(Node* list, int newValue) {
    Node* walker = list;
    while (walker->next != NULL) {
        walker = walker->next;
    }
    Node* newNode = (Node*)calloc(1, sizeof(Node));
    newNode->value = newValue;
    newNode->next = NULL;
    walker->next = newNode;   
}

void PrintLinkList(Node* head) {
    if (head == NULL) {
        printf("Empty link list!\n");
        return;
    }
    Node* walker = head;
    int count = 1;
    while (walker != NULL) {
        printf("%d: %d\n", count, walker->value);
        walker = walker->next;
        count++;
    }
}   

void CleanUp(Node* list) {
    Node* walker = list;
    while (walker != NULL) {
        Node* next = walker->next;
        free(walker);
        walker = next;
    }
}

int main(void) {
    Node* head = (Node*)calloc(1, sizeof(Node));
    head->value = 12;
    head->next = NULL;

    AddValue(head, 34);
    AddValue(head, 56);
    AddValue(head, 78);

    PrintLinkList(head);
    CleanUp(head);
    return 0;
}
