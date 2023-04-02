#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int solve(long long int nStairs, int i = 0)
{
    if (i == nStairs)
    {
        return 1;
    }
    if (i > nStairs)
    {
        return 0;
    }

    return (solve(nStairs, i + 1) + solve(nStairs, i + 2));
}
int main()
{
    long long int stairs;
    cout << "Stairs Input " << endl;
    cin >> stairs;
    cout << solve(stairs);
    return 0;
    /*****************
    intput   output
    2        2
    3        3
    4        5
    5        8
    ******************/
}