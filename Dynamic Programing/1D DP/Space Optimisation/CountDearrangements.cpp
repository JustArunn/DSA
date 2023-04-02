#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(int n)
{
    int prev2 = 0;
    int prev1 = 1;
    for (int i = 3; i <= n; i++)
    {
        int sum = prev1 + prev2;
        int ans = (i - 1) * sum;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main()
{
    int n = -1;
    cin >> n;
    cout << solve(n);
    return 0;
}