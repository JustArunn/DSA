#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class Node
{
public:
    int data;
    struct Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *t = new Node(data);
    t->next = head;
    head = t;
}
void insertAtTail(Node *&tail, int data)
{
    Node *t = new Node(data);
    tail->next = t;
    tail = t;
}
void insertAtPosition(Node *&head, Node *&tail, int p, int data)
{
    if (p == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *t = head;
    while (--p - 1)
    {
        t = t->next;
    }
    if (t->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *j = new Node(data);
    j->next = t->next;
    t->next = j;
}
void print(Node *&head)
{
    Node *pointer = head;
    while (pointer != NULL)
    {
        if (pointer->next == NULL)
        {
            cout << pointer->data;
            break;
        }
        cout << pointer->data << " -> ";
        pointer = pointer->next;
    }
}
void deleteNode(Node *&head, int p)
{
    if (p == 1)
    {
        Node *t = head;
        head = head->next;
        t->next = NULL;
        delete t;
    }

    Node *curr = head;
    Node *prev = NULL;
    while (--p)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
bool isCircular(Node *&head)
{
    Node *pointer = head;
    while (pointer != NULL)
    {
        pointer = pointer->next;
    }
    if (pointer == NULL)
        return 0;
    else
        return 1;
}
int main()
{
    Node *head = new Node(-1);
    Node *tail = head;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    deleteNode(head, 4);
    insertAtPosition(head, tail, 3, 9999);
    print(head);
}