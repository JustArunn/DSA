#include <iostream>
#include <stack>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int main()
{
    string str = "";
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    cout << " reverse of : " << str << " is " << ans << endl;
}