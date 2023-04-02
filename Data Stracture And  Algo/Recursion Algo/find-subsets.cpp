#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void solve(int i, string input, vector<string> &ans, string output)
{
    if (i >= input.size())
    {
        ans.push_back(output);
        return;
    }
    solve(i + 1, input, ans, output);
    solve(i + 1, input, ans, output + input[i]);
}
void print(vector<string> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        if (i < ans.size() - 1)
        {
            cout << "{" << ans[i] << "}"
                 << " -> ";
        }
        else
            cout << "{" << ans[i] << "}";
    }
}
int main()
{
    string input = "";
    cin >> input;
    vector<string> ans;
    string output = "";
    solve(0, input, ans, output);
    sort(ans.begin(), ans.end());
    print(ans);
    return 0;
}