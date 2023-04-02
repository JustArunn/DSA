#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class A
{
public:
    void func1()
    {
        cout << "this is function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "this is function 2" << endl;
    }
};
class c : public A
{
public:
    void func3()
    {
        cout << "this is function 3" << endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();
    cout << endl;

    B obj2;
    obj2.func1();
    obj2.func2();
    cout << endl;

    c obj3;
    obj3.func1();
    obj3.func3();

    return 0;
}