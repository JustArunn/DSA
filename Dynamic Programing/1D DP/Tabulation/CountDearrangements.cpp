#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveTab(int n)
{
    vector<int> dp(n + 1, 0);
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int first = dp[i - 1];
        int second = dp[i - 2];
        int sum = first + second;
        int ans = (i - 1) * sum;
        dp[i] = ans;
    }
    return dp[n];
}
int main()
{
    int n = -1;
    cin >> n;
    cout << solveTab(n);
    return 0;
}