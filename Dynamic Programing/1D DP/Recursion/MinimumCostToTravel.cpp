#include <iostream>
#include <vector>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(int n, vector<int> days, vector<int> cost, int index)
{
    if (index >= n)
    {
        return 0;
    }
    // 1 day pass
    int option1 = cost[0] + solve(n, days, cost, index + 1);

    // 7 day pass
    int i;
    for (int i = index; i < n && days[i] < days[index] + 7; i++)
    {
    }

    int option2 = cost[1] + solve(n, days, cost, i);

    // 30 day pass
    for (int i = index; i < n && days[i] < days[index] + 30; i++)
    {
    }

    int option3 = cost[2] + solve(n, days, cost, i);

    return min(option1, min(option2, option3));
}
int main()
{
    int n = 2;
    vector<int> days = {2, 5};
    vector<int> cost = {1, 4, 25};
    cout << solve(n, days, cost, 0);
}