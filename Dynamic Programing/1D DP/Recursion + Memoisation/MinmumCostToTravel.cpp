#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveMem(int n, vector<int> days, vector<int> cost, int index, vector<int> dp)
{
    if (index >= n)
    {
        return 0;
    }
    if (dp[index] != -1)
    {
        return dp[index];
    }
    // 1 day pass
    int option1 = cost[0] + solveMem(n, days, cost, index + 1, dp);

    // 7 day pass
    int i;
    for (int i = index; i < n && days[i] < days[index] + 7; i++)
        ;
    int option2 = cost[1] + solveMem(n, days, cost, i, dp);

    // 30 day pass
    for (int i = index; i < n && days[i] < days[index] + 30; i++)
        ;
    int option3 = cost[2] + solveMem(n, days, cost, i, dp);

    dp[index] = min(option1, min(option2, option3));
    return dp[index];
}
int main()
{
    int n = 2;
    vector<int> dp(n + 1, -1);
    vector<int> days = {2, 5};
    vector<int> cost = {1, 4, 25};
    cout << solveMem(n, days, cost, 0, dp);
}