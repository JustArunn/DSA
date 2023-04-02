#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


bool isPosible_solution(vector<int> v, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + v[i] <= mid)
        {
            pageSum += v[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || v[i] > mid)
            {
                return false;
            }
            pageSum = v[i];
        }
    }
    return true;
}
int bookAllocate(vector<int> v, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPosible_solution(v, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v = {12, 34, 67, 90}; // allotment is => 113
    cout << "Allotment is => " << bookAllocate(v, 4, 4);
    cout << endl;
    vector<int> v1 = {5, 17, 100, 11}; // allotment is => 100
    cout << "Allotment is => " << bookAllocate(v1, 4, 4);
}