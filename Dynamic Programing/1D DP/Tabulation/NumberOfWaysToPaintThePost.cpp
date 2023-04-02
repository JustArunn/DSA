#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int solveTab(int n, int k)
{
    vector<int> dp(n + 1, -1);
    dp[1] = k;
    dp[2] = k + k * (k - 1);
    for (int i = 3; i <= n; i++)
    {
        dp[i] = add(multiply(dp[i - 1], k - 1), multiply(dp[i - 2], k - 1));
    }
    return dp[n];
}
int main()
{
    int n = -1;
    int k = -1;
    cin >> n >> k;
    cout << solveTab(n, k);
    return 0;
}