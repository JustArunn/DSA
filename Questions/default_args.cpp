#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void print(int *arr, int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, n);
    cout << endl;
    print(arr, n, 2);
    return 0;
}