/*
Problem:
    Snuke has N sticks. The length of the i-th stick is l​ . Snuke is making a snake toy by joining K of the sticks together. The length of the toy is represented by the sum of the individual sticks that compose it. Find the maximum possible length of the toy.

Input condition:
    N K
    l1 l2 ... lN

Input1:
    5 3
    1 2 3 4 5
Ouput1:
    12

Iput2:
    15 14
    50 26 27 21 41 7 42 35 7 5 5 36 39 1 45
Output2:
    386
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int arr[50];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    int startForm = n-k;
    int count = 0;

    for(int i = startForm; i<n; i++){
      count += arr[i];
    }
    cout<<count<<endl;
}