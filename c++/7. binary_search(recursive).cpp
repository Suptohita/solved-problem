#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (ub + lb) / 2;

        if (x == array[mid])
        {
            return mid;
        }
        else if (x > array[mid])
        {
            binarySearch(array, x, mid + 1, ub);
        }
        else if (x < array[mid])
        {
            binarySearch(array, x, lb, mid - 1);
        }
    }
    else return -1;
}

int main()
{
    int size;
    cout << "Size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int searchItem;
    cout << "Enter the value you want to search: ";
    cin >> searchItem;

    cout << endl
         << endl;

    int index = binarySearch(array, searchItem, 0, size - 1);
    if (index == -1)
    {
        cout << "Not Found!";
    }
    else
    {
        cout << "Number Found ---->" << endl
             << "Index of the number is: " << index << endl
             << "Position of the number is: " << index + 1 << endl;
    }

    EXIT_SUCCESS;
}