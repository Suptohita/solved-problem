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

int main()
{
    int size;
    cout << "Input the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Input the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl<< "Before sorting: ";
    printArray(arr, size);

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "After sorting: ";
    printArray(arr, size);
    cout << endl;

    return 0;
}