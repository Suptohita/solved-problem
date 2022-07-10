/*
Problem:
    It is only six months until Christmas, and AtCoDeer the reindeer is now planning his travel to deliver gifts.There are N houses along TopCoDeer street. The i-th house is located at coordinate a(i). He has decided to deliver gifts to all these houses.Find the minimum distance to be traveled when AtCoDeer can start and end his travel at any positions.

Input condition:
    N
    a1 a2 ... aN

Input1:
    4
    2 3 7 9
Output1:
    7

Input2:
    8
    3 1 4 1 5 9 2 6
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    // int count = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     count += arr[i + 1] - arr[i];
    // }
    // cout << count << endl;

    cout<<arr[n-1]-arr[0]<<endl;
}
