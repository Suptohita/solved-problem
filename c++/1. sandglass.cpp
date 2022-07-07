/*
Problem:
    We have a sandglass that runs for XX seconds. The sand drops from the upper bulb at a rate of 11 gram per second. That is, the upper bulb initially contains XX grams of sand.
    How many grams of sand will the upper bulb contains after tt seconds?

Input Formate:
    The input is given from Standard Input in the following format: X t

Input:
    100 17
Output:
    83

Input:
    48 58
Output:
    0
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, t;

    cin >> x >> t;

    if (x - t > 0)
    {
        cout << x - t << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}