#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void Bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    int arr[50];
    cout << "enter the elements : ";
    input(arr, n);
    Bubble_sort(arr, n);
    cout << "shorted array => ";
    print(arr, n);
}