#include <bits/stdc++.h>
using namespace std;

void bubbleSortPass(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return;
    }

    if (arr[i] > arr[i + 1])
    {
        swap(arr[i], arr[i + 1]);
    }
    bubbleSortPass(arr, n, i + 1);
}

void recursiveBubbleSort(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }

    bubbleSortPass(arr, n, 0);

    recursiveBubbleSort(arr, n - 1);
}

int main()

{
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    recursiveBubbleSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
