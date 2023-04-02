#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(int n, vector<int> days, vector<int> cost)
{
    int ans = 0;
    queue<pair<int, int>> month;
    queue<pair<int, int>> week;
    for (int days : days)
    {
        // remove expired days
        while (!month.empty() && month.front().first + 30 <= days)
        {
            month.pop();
        }
        while (!week.empty() && week.front().first + 7 <= days)
        {
            week.pop();
        }

        week.push(make_pair(days, ans + cost[1]));
        month.push(make_pair(days, ans + cost[2]));

        ans = min(ans + cost[0], min(week.front().second, month.front().second));
    }
    return ans;
}
int main()
{
    int n = 2;
    vector<int> days = {2, 5};
    vector<int> cost = {1, 4, 25};
    cout << solve(n, days, cost);
}