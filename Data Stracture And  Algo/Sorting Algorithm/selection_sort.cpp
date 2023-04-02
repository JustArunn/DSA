#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void Selection_Sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter elements of array : ";
    input(arr, n);
    Selection_Sort(arr, n);
    cout << "sorted array => ";
    print(arr, n);
}