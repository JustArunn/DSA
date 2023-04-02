#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int main()
{
    int n;
    cout << "enter n => " << endl;
    cin >> n;

    int prev1 = 1;
    int prev2 = 0;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;

        prev1 = prev2;
        prev2 = curr;
    }

    cout << prev2 << endl;
}