#include <bits/stdc++.h>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


queue<int> reverse(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    print(q);
    cout << endl;
    queue<int> ans = reverse(q);
    print(ans);
    return 0;
}
