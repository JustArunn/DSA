#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int binary(int *arr, int s, int e, int k)
{
    //base cases

    //element not found
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    //element found
    if (arr[mid] == k)
        return mid;

    if (arr[mid] < k)
    {
        return binary(arr, mid + 1, e, k);
    }
    else
    {
        return binary(arr, s, mid - 1, k);
    }
}
int main()
{
    int n;
    cout << "enter the size of array :" << endl;
    cin >> n;
    int arr[30];
    cout << "enter elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter element to find :" << endl;
    cin >> key;
    cout << key << " found at index : " << binary(arr, 0, n - 1, key);
}