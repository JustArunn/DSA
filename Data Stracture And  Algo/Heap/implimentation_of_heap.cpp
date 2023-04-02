#include <iostream>
#include <queue>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size++;
        int index = size;
        arr[index] = value;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete " << endl;
            return;
        }

        // step :1 replace root node to last node
        arr[1] = arr[size];
        // step2 delete last node
        size--;
        // take root node to its correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[leftIndex], arr[i]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
                return;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int *arr, int n)
{
    int size = n;
    while (size > 1)
    {
        // step1:
        swap(arr[size], arr[1]);
        size--;

        // step2:
        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "printing the heapify array " << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "printing the heap sort " << endl;
    heapSort(arr, n);
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // max heap using STL
    cout << "MAX PQ START FROM HERE " << endl;
    priority_queue<int> max_pq;
    max_pq.push(4);
    max_pq.push(3);
    max_pq.push(2);
    max_pq.push(1);
    cout << "top element is " << max_pq.top() << endl;
    cout << "size is " << max_pq.size() << endl;
    if (max_pq.empty())
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        cout << "queue is not empty " << endl;
    }

    cout << "MIN PQ START FROM HERE " << endl;
    // min heap using STL
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(4);
    min_pq.push(3);
    min_pq.push(2);
    min_pq.push(1);
    cout << "top element is " << min_pq.top() << endl;
    cout << "size is " << min_pq.size() << endl;
    if (min_pq.empty())
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        cout << "queue is not empty " << endl;
    }
}