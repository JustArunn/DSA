#include <iostream>
using namespace std;


/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int BinarySearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            mid = s + (e - s) / 2;
        }
    }
    cout << key << " found at index : " << mid << endl;
}
void input(int *arr, int n)
{
    cout << "enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cout << "enter the size of array :" << endl;
    cin >> n;
    int *arr = new int[n];
    input(arr, n);
    int key;
    cout << "enter key : " << endl;
    cin >> key;
    cout << BinarySearch(arr, n, key);
    return 0;
}