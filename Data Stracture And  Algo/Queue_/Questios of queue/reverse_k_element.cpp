#include <bits/stdc++.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


queue<int> reverse_k_element(queue<int> q, int k)
{
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int t = q.size() - k;
    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
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
    int k = 3;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    print(q);
    cout << endl;
    queue<int> ans = reverse_k_element(q, k);
    print(ans);
    return 0;
}