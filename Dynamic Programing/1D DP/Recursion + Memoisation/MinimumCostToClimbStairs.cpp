#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> cost, int n, vector<int> &dp)
{
    // base case
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
    return dp[n];
}
int main()
{
    int n;
    cout << "enter N " << endl;
    cin >> n;
    vector<int> cost(n);
    cout << "Enter cost " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    vector<int> dp(n + 1, -1);
    cout << min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
    return 0;
    /**************************
    Input         Output
    10 15 20      15
    ***************************/
}