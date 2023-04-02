#include <iostream>
#include <limits.h>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MAX;
    }

    int a = solve(n - x, x, y, z) + 1;
    int b = solve(n - y, x, y, z) + 1;
    int c = solve(n - z, x, y, z) + 1;

    return max(a, max(b, c));
}
int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout << solve(n, x, y, z);
    /*
    if we take n = 10 && x = 2, y = 3, z = 4
    then output will be 5 for above;

    because 2 can devide 10 five times so that
    road have 5 segements;
    */
}