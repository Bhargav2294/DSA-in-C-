// // Selection sort in C++

// #include <iostream>
// using namespace std;

// // function to swap the the position of two elements
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // function to print an array
// void printArray(int array[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// void selectionSort(int array[], int size)
// {
//     for (int step = 0; step < size - 1; step++)
//     {
//         int min_idx = step;
//         for (int i = step + 1; i < size; i++)
//         {

//             // To sort in descending order, change > to < in this line.
//             // Select the minimum element in each loop.
//             if (array[i] < array[min_idx])
//                 min_idx = i;
//         }

//         // put min at the correct position
//         swap(&array[min_idx], &array[step]);
//     }
// }

// // driver code
// int main()
// {
//     int data[] = {20, 12, 10, 15, 2};
//     int size = sizeof(data) / sizeof(data[0]);
//     selectionSort(data, size);
//     cout << "Sorted array in Acsending Order:\n";
//     printArray(data, size);
// }





#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    
    for (i = 0; i < n - 1; i++)
    {        
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "<< endl;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
