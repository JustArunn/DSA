#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int fib(int n)
{
    //base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    int ans = fib(n);
    cout << fib(n) << endl;
}