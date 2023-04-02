#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int MaxSum(vector<int> nums, int n, vector<int> dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
    {
        return nums[0];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int Include = MaxSum(nums, n - 2, dp) + nums[n];
    int Exclude = MaxSum(nums, n - 1, dp) + 0;

    dp[n] = max(Include, Exclude);
    return dp[n];
}
int main()
{
    vector<int> Input;
    Input.push_back(9);
    Input.push_back(9);
    Input.push_back(8);
    Input.push_back(2);
    vector<int> dp(Input.size(), -1);
    cout << MaxSum(Input, Input.size() - 1, dp);
    return 0;
}