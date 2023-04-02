#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solveMem(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
            return 0;
    }
    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }
    int Include = -1;
    if (weight[index] <= capacity)
    {
        Include = value[index] + solveMem(weight, value, index - 1, capacity - weight[index], dp);
    }
    int Exclude = solveMem(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(Include, Exclude);
}
int main()
{
    vector<int> weight;
    weight.push_back(1);
    weight.push_back(2);
    weight.push_back(4);
    weight.push_back(5);
    vector<int> value;
    value.push_back(5);
    value.push_back(4);
    value.push_back(8);
    value.push_back(6);
    int n = 4;
    int capacity = 5;
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
    cout << solveMem(weight, value, n - 1, capacity, dp);
    // for above input, output will be 13

    return 0;
}