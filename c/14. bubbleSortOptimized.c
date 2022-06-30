// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         scanf("%d", &a);

//         int arr[a];

//         for (int j = 0; j < a; j++)
//         {
//             scanf("%d", &arr[j]);
//         }

//         for (int k = 0; k < a; k++)
//         {
//             for (int l = k + 1; l < a; l++)
//             {
//                 if (arr[l] < arr[k])
//                 {
//                     int temp = arr[k];
//                     arr[k] = arr[l];
//                     arr[l] = temp;
//                 }
//             }
//         }

//         printf("%d", arr[1] - arr[0]);
//     }
// }

#include <stdio.h>
#include <stdbool.h>

// bubble sort
void sort(int arr[], int n)
{
    bool isSorted;
    for (int i = 0; i < n; i++)
    {
        isSorted = true;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = false;
            }
            if (isSorted)
                return;
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