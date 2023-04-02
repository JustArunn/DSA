#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> nums, int target, vector<int> dp)
{
    if (target < 0)
    {
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }
    if (dp[target] != -1)
    {
        return dp[target];
    }
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += solve(nums, target - nums[i], dp);
    }
    dp[target] = ans;
    return dp[target];
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    int target = 3;
    vector<int> dp(target + 1, -1);
    cout << solve(nums, target, dp);
    // output will be 3 for above input
}