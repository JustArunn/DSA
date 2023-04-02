#include <string.h>
#include <iostream>
#include <map>
#include <utility>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int main()
{
    map<int, string> Employees;
    // 1) Assignment using array index notation
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    cout << "Employees[104]=" << Employees[104] << endl
         << endl;
    cout << "Map size: " << Employees.size() << endl;
    cout << endl
         << "Natural Order:" << endl;
    for (map<int, string>::iterator i = Employees.begin(); i != Employees.end(); ++i)
    {
        cout << (*i).first << ": " << (*i).second << endl;
    }
    cout << endl
         << "Reverse Order:" << endl;
    for (map<int, string>::reverse_iterator i = Employees.rbegin(); i != Employees.rend(); ++i)
    {
        cout << (*i).first << ": " << (*i).second << endl;
    }
}