#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


struct stack
{
    int data;
    stack *next;
};
stack *top = NULL;
void push(int data)
{
    stack *node = (stack *)malloc(sizeof(stack));
    node->data = data;
    node->next = top;
    top = node;
}
void pop()
{
    if (top != NULL)
    {
        stack *pointer = top;
        top = top->next;
        pointer->next = NULL;
        delete pointer;
    }
    else
    {
        cout << "stack is underFlow " << endl;
        return;
    }
}
int peek()
{
    if (top != NULL)
    {
        return top->data;
    }
    else
        return -1;
}
void print()
{
    cout << "elements in stack => ";
    while (top != NULL)
    {
        cout << peek() << " ";
        pop();
    }
    cout << endl;
}
void Length()
{
    stack *pointer = top;
    int Lenght = 0;
    while (pointer != NULL)
    {
        pointer = pointer->next;
        Lenght++;
    }
    cout << "Length of stack is => " << Lenght << endl;
}
bool isEmpty()
{

    if (top == NULL)
    {
        cout << "stack is empty" << endl;
        Length();
        return true;
    }
    else
    {
        cout << "stack is not empty" << endl;
        Length();
        return false;
    }
}
int main()
{
    push(8);
    push(7);
    push(6);
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    isEmpty();
    print();
}