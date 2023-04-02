#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


struct node
{
    int data;
    node *next;
    node *previous;
};
node *head = NULL;
node *tail = NULL;
void insertAtHead(int data)
{
    struct node *node_to_insert = (struct node *)malloc(sizeof(struct node));
    node_to_insert->data = data;
    node_to_insert->next = head;
    if (head != NULL)
        head->previous = node_to_insert;
    else
        node_to_insert->previous = NULL;
    head = node_to_insert;
}
void insertAtTail(int data)
{
    struct node *node_to_insert = (struct node *)malloc(sizeof(struct node));
    node_to_insert->data = data;
    node_to_insert->next = NULL;
    node *pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = node_to_insert;
    node_to_insert->previous = pointer;
    head = node_to_insert;
}
void insertAtPosition(int data, int position)
{
    if (position == 1)
    {
        insertAtHead(data);
        return;
    }
    node *pointer = head;
    while (--position - 1)
    {
        pointer = pointer->next;
    }
    if (pointer->next == NULL)
    {
        insertAtTail(data);
        return;
    }
    struct node *node_to_insert = (struct node *)malloc(sizeof(struct node));
    node_to_insert->data = data;
    node_to_insert->next = pointer->next;
    node_to_insert->previous = pointer->previous;
    pointer->next = node_to_insert;
    pointer->previous = node_to_insert;
}
bool ans(int position)
{
    node *pointer = head;
    while (--position)
    {
        pointer = pointer->next;
    }
    if (pointer->next == NULL)
        return 1;
    else
        return 0;
}
void deleteNode(int position)
{
    if (position == 1)
    {
        node *pointer = head;
        head = head->next;
        head->previous = NULL;
        pointer->next = NULL;
        delete pointer;
    }
    else if (ans(position))
    {
        node *pointer = tail;
        tail = tail->previous;
        tail->next = NULL;
        pointer->next = NULL;
        delete pointer;
    }
    else
    {
        node *currentNode = head;
        node *previousNode = NULL;
        while (--position)
        {
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
        previousNode->next = currentNode->next;
        currentNode->next->previous = previousNode;
        currentNode->next = NULL;
        currentNode->previous = NULL;
        delete currentNode;
    }
}
void print()
{
    node *pointer = head;
    while (pointer != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    }
}
void ReversePrint()
{

    if (tail == NULL)
    {
        node *pointer = head;
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        tail = pointer;
    }
    node *pointer = tail;
    while (pointer->previous != NULL)
    {
        cout << pointer->data << " ";
        pointer = pointer->previous;
    }
}
int main()
{

    insertAtHead(3);
    insertAtHead(2);
    insertAtHead(1);
    insertAtTail(4);
    insertAtTail(5);
    insertAtTail(6);
    insertAtPosition(7, 7);
    print();
    deleteNode(7);
    cout << endl;
    print();
    cout << endl;
    ReversePrint();
    cout << endl;
}