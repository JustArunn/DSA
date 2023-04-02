#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


int main()
{
    int n;
    cout << "Enter the no. of row => ";
    cin >> n;
    int m;
    cout << "Enter the no. of coloum => ";
    cin >> m;

    int **arr = new int *[n];
    // creation of 2D arrya
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    // taking input in 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // relesing memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}