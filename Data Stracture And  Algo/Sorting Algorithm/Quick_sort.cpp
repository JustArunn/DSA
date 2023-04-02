#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int partision(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            cnt++;
    }
    // placing pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (j >= pivot)
        {
            j--;
        }
        while (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void Quick_sort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partision
    int p = partision(arr, s, e);

    // right part sort
    Quick_sort(arr, s, p - 1);

    // left part sort
    Quick_sort(arr, p + 1, e);
}

void print(int *arr, int n)
{
    cout << "sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << "enter size of array : " << endl;
    int n;
    cin >> n;
    int arr[30];
    cout << "enter elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting
    Quick_sort(arr, 0, n - 1);
    print(arr, n);
}