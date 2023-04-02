#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int power(int n)
{
    //base case
    if (n == 0)
        return 1;
    return 2 * power(n - 1);
}
int main()
{
    int n;
    cin >> n;
    power(n);
    int ans = power(n);
    cout << ans << endl;
}