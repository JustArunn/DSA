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
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }

    int ans = add(multiply(solve(n - 1, k), k - 1), multiply(solve(n - 2, k), k - 1));
    return ans;
}
int main()
{
    int n = -1;
    int k = -1;
    cin >> n >> k;
    cout << solve(n, k);
    return 0;
}