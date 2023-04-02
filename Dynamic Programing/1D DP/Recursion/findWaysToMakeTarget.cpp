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
    if (target < 0)
    {
        return 0;
    }
    if (target == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += solve(nums, target - nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    int target = 4;
    cout << solve(nums, target);
    // output will be 3 for above input
}