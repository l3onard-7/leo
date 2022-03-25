#include <stdio.h>
#include <stdlib.h>
 
// Data structure to store a linked list node
struct node
{
    int data;
    struct node* link;
};
 
// Helper function to return new linked list node from the heap
struct Node* newNode(int data)
{
    // allocate a new node in a heap and set its data
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
 
    // `.next` pointer of the new node points to nothing
    node->next = NULL;
 
    return node;
}
 
// Naive function for linked list implementation containing three nodes
struct Node* constructList()
{
    // construct three linked list nodes
    struct Node* first = newNode(1);
    struct Node* second = newNode(2);
    struct Node* third = newNode(3);
 
    // rearrange the pointers to construct a list
    struct Node* head = first;
    first->next = second;
    second->next = third;
 
    // return a pointer to the first node in the list
    return head;
}
 
// Helper function to print a linked list
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL");
}
 
int main(void)
{
    // `head` points to the first node (also known as a head node) of a linked list
    struct Node* head = constructList();
 
    // print linked list
    printList(head);
 
    return 0;
}
