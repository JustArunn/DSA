#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int MaxSum(vector<int> nums)
{
    int n = nums.size();
    int prev2 = 0;
    int prev1 = nums[0];
    for (int i = 1; i < n; i++)
    {
        int Include = prev2 + nums[i];
        int Exclude = prev1 + 0;
        int ans = max(Include, Exclude);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main()
{
    vector<int> valueInHouse;
    valueInHouse.push_back(1);
    valueInHouse.push_back(3);
    valueInHouse.push_back(2);
    valueInHouse.push_back(1);
    int n = valueInHouse.size();
    vector<int> first, second;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {
            first.push_back(valueInHouse[i]);
        }
        if (i != 0)
        {
            second.push_back(valueInHouse[i]);
        }
    }
    cout << max(MaxSum(first), MaxSum(second));
}