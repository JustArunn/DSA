#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> cost, int n)
{
    vector<int> dp(n + 1);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i < n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
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
    cout << solve(cost, n);
    /**************************
    Input         Output
    10 15 20      15
    ***************************/
}