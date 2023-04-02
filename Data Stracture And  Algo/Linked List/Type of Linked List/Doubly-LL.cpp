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
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *t = new Node(data);
    if (head == NULL)
    {
        t->next = head;
        head = t;
    }
    else
    {
        t->next = head;
        head->prev = t;
        head = t;
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

    Node *c = head;
    Node *pv = NULL;
    while (--p)
    {
        pv = c;
        c = c->next;
    }
    pv->next = c->next;
    c->next->prev = pv;
    c->prev = NULL;
    c->next = NULL;
    delete c;
}
void insertAtTail(Node *&tail, int data)
{
    Node *t = new Node(data);
    tail->next = t;
    t->prev = tail;
    tail = t;
}
void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        if (t->next == NULL)
        {
            cout << t->data;
            break;
        }
        cout << t->data << " -> ";
        t = t->next;
    }
}
void printR(Node *&tail)
{
    Node *t = tail;
    while (t != NULL)
    {
        if (t->prev == NULL)
        {
            cout << t->data;
            break;
        }
        cout << t->data << " -> ";
        t = t->prev;
    }
}
int main()
{
    Node *head = new Node(-1);
    Node *tail = head;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);
    deleteNode(head, 5);
    print(head);
    cout << endl;
    printR(tail);
}