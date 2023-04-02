#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> &weight, vector<int> &value, int index, int capacity)
{
    vector<vector<int>> dp(index, vector<int>(capacity + 1, -1));

    for (int w = 0; w <= capacity; w++)
    {
        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
            dp[0][w] = 0;
    }
    for (int i = 1; i < index; i++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int Include = 0;
            if (weight[i] <= w)
            {
                Include = value[i] + dp[i - 1][w - weight[i]];
            }
            int Exclude = 0 + dp[i - 1][w];
            dp[i][w] = max(Include, Exclude);
        }
        return dp[index - 1][capacity];
    }
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
    cout << solve(weight, value, n, capacity);
    // for above input, output will be 13

    return 0;
}