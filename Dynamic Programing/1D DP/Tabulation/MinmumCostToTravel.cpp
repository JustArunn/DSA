#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveTab(int n, vector<int> days, vector<int> cost)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[n] = 0;
    for (int k = n - 1; k >= 0; k++)
    {
        int option1 = dp[0] + dp[k + 1];
        for (int i = k; i < n && days[i] < days[k] + 7; i++)
            ;
        int i;
        int option2 = dp[1] + dp[i];
        for (int i = k; i < n && days[i] < days[k] + 30; i++)
            ;
        int option3 = dp[2] + dp[i];
        dp[k] = min(option1, min(option2, option3));
    }
    return dp[0];
}
int main()
{
    int n = 2;
    vector<int> days = {2, 5};
    vector<int> cost = {1, 4, 25};
    cout << solveTab(n, days, cost);
}