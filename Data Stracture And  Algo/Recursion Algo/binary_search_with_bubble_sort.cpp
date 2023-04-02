#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void BubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int BinarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return BinarySearch(arr, s, mid - 1, key);
    else
        return BinarySearch(arr, mid + 1, e, key);
}
int main()
{
    int n;
    cout << "enter the size of array :" << endl;
    cin >> n;
    int arr[30];
    cout << "enter elements : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "enter key : " << endl;
    int key;
    cin >> key;
    cout << key << " found at index :" << BinarySearch(arr, 0, n - 1, key);
}