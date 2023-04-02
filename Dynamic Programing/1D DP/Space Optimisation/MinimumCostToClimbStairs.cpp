#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(vector<int> cost, int n)
{
    int prev2 = cost[0];
    int prev1 = cost[1];

    for (int i = 2; i < n; i++)
    {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1, prev2);
}
int main()
{
    int n;
    cout << "enter N " << endl;
    cin >> n;
    vector<int> cost(n);
    cout << "Enter cost " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    cout << solve(cost, n);
    /**************************
    Input         Output
    10 15 20      15
    ***************************/
}