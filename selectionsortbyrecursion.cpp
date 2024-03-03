#include <bits/stdc++.h>
using namespace std;

int findMinIndex(int arr[], int start, int end)
{
    if (start == end)
    {
        return start;
    }

    int minIndex = findMinIndex(arr, start + 1, end);

    return (arr[start] < arr[minIndex]) ? start : minIndex;
}

void SelectionSort(int arr[], int n, int currentIndex = 0)
{
    if (currentIndex == n - 1)
    {
        return;
    }

    int minIndex = findMinIndex(arr, currentIndex, n - 1);

    if (minIndex != currentIndex)
    {
        swap(arr[currentIndex], arr[minIndex]);
    }

    recursiveSelectionSort(arr, n, currentIndex + 1);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
