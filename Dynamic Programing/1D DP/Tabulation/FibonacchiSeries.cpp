#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int fib(int n, vector<int> &dp)
{
    dp[1] = 1;
    dp[0] = 0;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cout << "enter n " << endl;
    cin >> n;
    vector<int> dp(n + 1);
    cout << fib(n, dp);
    return 0;
}