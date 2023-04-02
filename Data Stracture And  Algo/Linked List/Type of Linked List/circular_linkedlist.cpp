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
};
node *head = NULL;
void insert(node*&head, int data)
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
    }
    else
    {
        node_to_insert->next = node_to_insert;
    }
    head = node_to_insert;
}
int getLength(node*&head)
{
    node *pointer = head;
    int length = 1;
    while (pointer->next != head)
    {
        length++;
        pointer = pointer->next;
    }
    return length;
}
void print(node*&head)
{
    node *pointer = head;
    do
    {
        cout << pointer->data << " ";
        pointer = pointer->next;
    } while (pointer != head);
}
void insertAtPosition(node*&head, int data, int position)
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
    }
}
void deleteNode(node*&head, int position)
{
    if (position == 1)
    {
        node *pointer = head;
        node *current = head;
        while (pointer->next != head)
        {
            pointer = pointer->next;
        }
        pointer->next = head->next;
        head = pointer->next;
        delete current;
    }
    else
    {
        node *current = head;
        node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    insertAtPosition(head,5, 5);
    print(head);
    // cout << endl;
    // cout << "length : " << getLength();
    // cout << endl;
    // deleteNode(3);
    // cout << endl;
    // print();
}