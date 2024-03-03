#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    
    insertionSort(data, size);
    cout << "Sorted array in ascending order: ";
    printArray(data, size);
}

// int j = i - 1;

// for (; j >= 0; j--)
// {
//     if (arr[j] > key)
//         arr[j + 1] = arr[j];
//     else
//         break;
// }
