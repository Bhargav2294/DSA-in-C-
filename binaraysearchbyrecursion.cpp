#include <iostream>
using namespace std;

int BinarySearch(const int arr[], int left, int right, int n)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == n)
        {
            return mid;
        }
        else if (arr[mid] < n)
        {
            return BinarySearch(arr, mid + 1, right, n);
        }
        else
        {
            return BinarySearch(arr, left, mid - 1, n);
        }
    }

    return -1; 
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the element to search for: ";
    int number;
    cin >> number;

    int result = BinarySearch(arr, 0, size - 1, number);

    if (result != -1)
    {
        cout << "Element " << number << " found at index " << result << std::endl;
    }
    else
    {
        cout << "Element " << number << " not found in the array." << std::endl;
    }

    return 0;
}
