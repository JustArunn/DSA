#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class A
{
    int a;
    int b;

public:
    A(int x = -1, int y = -1)
    {
        this->a = x;
        this->b = y;
    }
    
    A operator+(A o)
    {
        A temp;
        temp.a = a + o.a;
        return temp;
    }
};

int main()
{
    A obj1(1, 2);
    A obj2(2,3);
    A total = obj1 + obj2;

    return 0;
}