#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveMem(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, solveMem(n - i * i, dp) + 1);
    }
    dp[n] = ans;
    return dp[n];
}
int main()
{
    int n = 100;
    vector<int> dp(n + 1, -1);

    cout << solveMem(n, dp);
}