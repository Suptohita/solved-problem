/*
Problem:
    You are given a string ss consisting of lowercase English letters. Extract all the characters in the odd-indexed positions and print the string obtained by concatenating them. Here, the leftmost character is assigned the index 11.

Input Condition:
    The input is given from Standard Input in the following format:

Input:
    atcoder
Output:
    acdr

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0 )
        {
            ans += s[i];
        }
    }
    cout << ans;
    return 0;
};