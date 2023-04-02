#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


/* PROGRAM TO FIND MINIMUM NO. OF COINS TO MAKE TARGET AMOUNT */
int solveRec(vector<int> coins, int amount)
{
    if (amount == 0)
    {
        return 0;
    }

    if (amount < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveRec(coins, amount - coins[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    return mini;
}

int main()
{
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    int amount = -1;
    cout << "Enter Amount " << endl;
    cin >> amount;
    int ans = solveRec(coins, amount);
    if (ans == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
        cout << ans;
    return 0;
}