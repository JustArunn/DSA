#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> nums, int target)
{
    vector<int> dp(target + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i - nums[j] >= 0)
                dp[i] += dp[i - nums[j]];
        }
    }
    return dp[target];
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    int target = 3;
    cout << solve(nums, target);
    // output will be 3 for above input
}