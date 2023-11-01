// Linked List Demo
// Written by Catherine Cheng z5310517

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);

int main (void) {
    // how do we create a linked list
    struct node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);


    // iterating through a linked list
    struct node *curr = head;
    while(curr != NULL) {

        printf("%d\n", curr->data);
        curr = curr->next;

    }
  
    // insert at end of linked list
    struct node *curr2 = head;
    while(curr2->next != NULL) {

        
        curr2 = curr2->next;

    }

    curr2->next = create_node(4);

    // insert at head
    struct node *new_head = create_node(0);
    new_head->next = head;
    head = new_head;


    // inserting in middle
    struct node *curr3 = head;
    struct node *new_node = create_node(2.5);
    int flag = 1;
    while (curr3 != NULL && flag == 1) {
        if (curr3->data < new_node->data) {
            new_node->next = curr3->next;
            curr3->next = new_node
            flag = 0;
        }
        curr3 = curr3->next;
    }
    
    head->next->next->next = new_node;

    // special cases
    // - empty list
    // - list of size 1
    // - list of other sizes

    


}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
