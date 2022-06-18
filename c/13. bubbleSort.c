#include <stdio.h>

// bubble sort
void swap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 1, 2, 5, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    swap(arr, n);

    // beacuse of array behaves like a pointer, it'll update automatically after calling swap()
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
