#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int MaxSum(vector<int> nums, int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return nums[0];
    }

    int Include = MaxSum(nums, n - 2) + nums[n];
    int Exclude = MaxSum(nums, n - 1) + 0;
    return max(Include, Exclude);
}
int main()
{
    vector<int> nums;
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(8);
    nums.push_back(2);
    int n = nums.size();
    cout << MaxSum(nums, n - 1);
    return 0;
}