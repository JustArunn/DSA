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

    int divide(int a)
    {
        return a >> 1;
    }
};
class B
{
public:

    int add(int a)
    {
        return a + 2;
    }
};
class C : public A, public B
{
public:
    int multiply(int a)
    {
        return a * 2;
    }
};
int main()
{
    C obj;
    // obj.A::func();
    // obj.B::func();
    // obj.C::func();
    cout <<"20 divide by 2 is  => "<< obj.A::divide(20) << endl;
    cout <<"10 + 2 is          => "<< obj.B::add(10) << endl;
    cout <<"5 multiply by 2 is => "<< obj.multiply(5) << endl;
    return 0;
}