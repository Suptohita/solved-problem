#include <stdio.h>

// bubble sort
void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 1, 2, 5, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    // beacuse of array behaves like a pointer, it'll update automatically after calling swap()
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}