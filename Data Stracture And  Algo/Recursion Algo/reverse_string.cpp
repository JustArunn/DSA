#include <iostream>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


string reverse(string str)
{
    if (str.size() <= 0)
        return str;
    reverse(str.substr(1));
    cout << str[0];
}
int main()
{
    string str = "";
    cin >> str;
    reverse(str);
}