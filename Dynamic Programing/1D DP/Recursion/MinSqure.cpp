#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, solve(n - i * i) + 1);
    }
    return ans;
}
int main()
{
    int n = 100;
    cout << solve(n);
    return 0;
}