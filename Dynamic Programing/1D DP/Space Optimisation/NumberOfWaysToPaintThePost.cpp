#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int add(int a, int b)
{
    return a + b;
}
int multiply(int a, int b)
{
    return a * b;
}
int solve(int n, int k)
{
    int prev1 = k;
    int prev2 = k + k * (k - 1);
    for (int i = 3; i <= n; i++)
    {
        int ans = add(multiply(prev2, k - 1), multiply(prev1, k - 1));
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int main()
{
    int n = -1;
    int k = -1;
    cin >> n >> k;
    cout << solve(n, k);
    return 0;
}