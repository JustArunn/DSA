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
    // base case
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }

    return cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
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
    int ans = min(solve(cost, n - 1), solve(cost, n - 2));
    cout << ans << endl;
    return 0;
    /**************************
    Input         Output
    10 15 20      15
    ***************************/
}