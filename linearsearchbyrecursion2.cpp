#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int size, int index = 0)
{

    if (index >= size)
    {
        return -1;
    }

    if (arr[index] == n)
    {
        return index;
    }

    return LinearSearch(arr, n, size, index + 1);
}

int main()
{
    int arraySize;
    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int myArray[arraySize];

    cout << "Enter " << arraySize << " elements for the array:" <<endl;
    for (int i = 0; i < arraySize; ++i)
    {
        cin >> myArray[i];
    }

    int number;
    cout << "Enter the target element to search for: ";
    cin >> number;

    int result = LinearSearch(myArray, number, arraySize);

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
