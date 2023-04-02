#include <bits/stdc++.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void solve(string digits, string output, int index, vector<string> &ans, string mapping[])
{
    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}
vector<string> Letter_Combination(string digits)
{
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}
int main()
{
    string digits;
    cin >> digits;
    vector<string> ans = Letter_Combination(digits);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}