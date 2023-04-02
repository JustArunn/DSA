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
void insert(node *&head,int data)
{
    node *node_to_insert = (node *)malloc(sizeof(node));
    node_to_insert->data = data;
    node_to_insert->next = head;
    node *pointer = head;
    if (head != NULL)
    {
        while (pointer->next != head)
        {
            pointer = pointer->next;
        }
        pointer->next = node_to_insert;
        node_to_insert->previous = pointer;
        head->previous = node_to_insert;
    }
    else
    {
        node_to_insert->next = node_to_insert;
        node_to_insert->previous = node_to_insert;
    }
    head = node_to_insert;
}

void insertAtPosition(node *&head,int data, int position)
{
    if (position == 1)
    {
        insert(head,data);
        return;
    }
    else
    {

        node *pointer = head;
        while (--position - 1)
        {
            pointer = pointer->next;
        }
        node *node_to_insert = (node *)malloc(sizeof(node));
        node_to_insert->data = data;
        node_to_insert->next = pointer->next;
        pointer->next = node_to_insert;
        node_to_insert->previous = pointer;
        node_to_insert->next->previous = node_to_insert;
    }
}
void deleteNode(node *&head,int position)
{
    if (position == 1)
    {
        node *pointer = head;
        head = head->next;
        node *curr = pointer->previous;
        head->previous = curr;
        curr->next = head;
        pointer->next = NULL;
        pointer->previous = NULL;
        cout << "deleted Node => " << pointer->data << " at index => 1" << endl;
        delete pointer;
    }
    else
    {
        node *currentNode = head;
        node *previousNode = NULL;
        int index = position;
        while (--position)
        {
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
        previousNode->next = currentNode->next;
        node *temp = currentNode->next;
        temp->previous = previousNode;
        currentNode->next = NULL;
        currentNode->previous = NULL;
        cout << "deleted Node => " << currentNode->data << " at index => " << index << endl;
        delete currentNode;
    }
}
void Length(node*&head)
{
    node *pointer = head;
    int Length = 0;
    while (pointer->next != head)
    {
        Length++;
        pointer = pointer->next;
    }
    cout << "Lenght of List is => " << Length << endl;
}
void print(node *&head)
{
    node *pointer = head;
    cout << "elemets in List       => ";
    do
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    } while (pointer != head);
}

void reversePrint(node *&head)
{
    node *pointer = head;
    cout << "Reverse Print of List => ";
    do
    {
        pointer = pointer->previous;
        cout << pointer->data << " ";
    } while (pointer != head);
}
int main()
{
    node*head = NULL;
    insert(head,5);
    insert(head,3);
    insertAtPosition(head,2, 1);
    insertAtPosition(head,4, 3);
    insertAtPosition(head,6, 5);
    insert(head,1);
    print(head);
    cout << endl;
    reversePrint(head);
}