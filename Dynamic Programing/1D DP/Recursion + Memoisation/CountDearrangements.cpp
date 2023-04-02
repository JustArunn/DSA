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
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = (n - 1) * (solveMem(n - 1, dp) + solveMem(n - 2, dp));
    return dp[n];
}
int main()
{
    int n = -1;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << solveMem(n, dp);
}