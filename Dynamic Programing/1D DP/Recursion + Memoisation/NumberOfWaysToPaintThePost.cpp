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
int solveMem(int n, int k, vector<int> &dp)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = add(multiply(solveMem(n - 1, k, dp), k - 1), multiply(solveMem(n - 2, k, dp), k - 1));
    return dp[n];
}
int main()
{
    int n = -1;
    int k = -1;
    cin >> n >> k;
    vector<int> dp(n + 1, -1);
    cout << solveMem(n, k, dp);
    return 0;
}