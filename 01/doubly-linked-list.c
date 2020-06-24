#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
    struct Node* prev;
};

// head_ref <- reference to the head of the list
void push(struct Node** head_ref, char new_data)
{
    // allocate memory to the node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if(*head_ref != NULL)
        (*head_ref)->prev = new_node;
    
    *head_ref = new_node;
}