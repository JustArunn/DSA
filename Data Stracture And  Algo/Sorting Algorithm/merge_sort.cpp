#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values
    int MainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[MainArrayIndex++];
    }
    MainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[MainArrayIndex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    MainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[MainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[MainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[MainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[MainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    // left part sort
    mergesort(arr, s, mid);

    // right part
    mergesort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
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
    cout << "enter elements : ";
    input(arr, n);
    mergesort(arr, 0, n - 1);
    print(arr, n);
}