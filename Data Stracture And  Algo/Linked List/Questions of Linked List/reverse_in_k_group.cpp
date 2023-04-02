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
    node *node_to_insert = (node *)malloc(sizeof(node));
    node_to_insert->data = data;
    node_to_insert->next = head;
    head = node_to_insert;
}
void solve(node *head1, int k)
{
    if (head1 == NULL)
    {
        return;
    }

    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }

    if (forward != NULL)
    {
        head->next = solve(forward, k);
    }
}
void reverse_by_recursion(int k)
{
    node *curr = head;
    int group = k;
    solve(curr, group);
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
int main()
{
    insertAtHead(6);
    insertAtHead(5);
    insertAtHead(4);
    insertAtHead(3);
    insertAtHead(2);
    insertAtHead(1);
    cout << "Simple print           => ";
    print();
}