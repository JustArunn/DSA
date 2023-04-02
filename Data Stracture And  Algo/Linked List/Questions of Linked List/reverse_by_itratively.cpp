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
node *tail = NULL;
void insertAtHead(int data)
{
    node *node_to_insert = ( node *)malloc(sizeof( node));
    node_to_insert->data = data;
    node_to_insert->next = head;
    head = node_to_insert;
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
void reverse()
{
    node *curr = head;
    node *prev = NULL;
    node *forward= NULL;
    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
int main()
{
    insertAtHead(6);
    insertAtHead(5);
    insertAtHead(4);
    insertAtHead(3);
    insertAtHead(2);
    insertAtHead(1);
    cout<<"Simple print           => ";
    print();
    reverse();
    cout<<endl;
    cout<<"reverse by itratively  => ";
    print();
}