#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void shiftNoneZero(vector<int> &nums)
{
    int noneZero = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[noneZero++]);
        }
    }
}
int main()
{
    vector<int> arr = {0, 1, 3, 0, 4, 0, 5};
    shiftNoneZero(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}