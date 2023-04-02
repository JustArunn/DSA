#include <iostream>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class stack
{
    int *arr;
    int size;
    int top;

public:
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is OverFlow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is UnderFlow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            false;
        }
    }

    void print();
};
void stack::print()
{
    while (top != -1)
    {
        cout << peek() << " ";
        pop();
    }
}
int main()
{
    stack s(4);

    s.push(22);
    s.push(23);
    s.push(24);
    s.push(26);

    s.print();
    return 0;
}