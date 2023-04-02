#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveMem(vector<int> coins, int amount, vector<int> dp)
{
    if (amount == 0)
    {
        return 0;
    }

    if (amount < 0)
    {
        return INT_MAX;
    }
    if (dp[amount] != -1)
    {
        return dp[amount];
    }
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveMem(coins, amount - coins[i], dp);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    dp[amount] = mini;
}

int main()
{
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(3);
    int amount = -1;
    cout << "Enter Amount " << endl;
    cin >> amount;
    vector<int> dp(amount + 1, -1);

    int ans = solveMem(coins, amount, dp);
    if (ans == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
        cout << ans;
    return 0;
}