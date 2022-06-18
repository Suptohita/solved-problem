// Make a function named check_array() which will take an array of integers and the size of that array N. It will return a boolean type whether this array has all values from 1 to N or not.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void remove_duplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
}

bool check_array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > n || arr[i] < 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    remove_duplicate(arr, n);
    check_array(arr, sizeof(arr) / sizeof(arr[0]));

    bool result = check_array(arr, n);
    printf("%d\n", result);
}
