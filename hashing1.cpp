#include<bits/stdc++.h>
using namespace std;

int SIZE = 10;

int hashFunction(int value)
{
    return value % SIZE;
}

void insert(int hashtable[], int value)
{
    int index = hashFunction(value);
    while (hashtable[index] != -1)
        index = (index + 1) % SIZE;

    hashtable[index] = value;
}

void display(int hashtable[])
{
    cout << "Hash Table:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Index " << i << ": ";
        if (hashtable[i] != -1)
            cout << hashtable[i] << endl;
        else
            cout << "Empty" << endl;
    }
}

int search(int hashtable[], int value)
{
    int index = hashFunction(value);
    int originalIndex = index;
    while (hashtable[index] != value)
    {
        index = (index + 1) % SIZE;
        if (index == originalIndex || hashtable[index] == -1)
        {
            cout << value << " not found in the table" << endl;
            return -1;
        }
    }
    cout << value << " found at index " << index << endl;
    return index;
}

void remove(int hashtable[], int value)
{
    int index = search(hashtable, value);
    if (index != -1)
    {
        hashtable[index] = -1;
        cout << "Removed " << value << " from index " << index << endl;
    }
}

int main()
{
    int hashtable[SIZE];
    for (int i = 0; i < SIZE; i++)
        hashtable[i] = -1;

    insert(hashtable, 10);
    insert(hashtable, 8);
    insert(hashtable, 19);
    insert(hashtable, 23);
    insert(hashtable, 46);
    insert(hashtable, 98);
    insert(hashtable, 76);
    insert(hashtable, 67);

    display(hashtable);

    remove(hashtable, 23);

    display(hashtable);

    search(hashtable, 65);

    return 0;
}
