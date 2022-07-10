/*
Problem:
    You are given a string S consisting of lowercase English letters. Find the lexicographically (alphabetically) smallest lowercase English letter that does not occur in S. If every lowercase English letter occurs in S, print None instead.

Input condition:
    1 ≤ |S| ≤ 10^5 (|S| is the length of S)
    S consists of lowercase English letters.

Input1:
    abcdefghijklmnopqrstuvwxyz
Output1:
    None   

Input2:
    atcoderregularcontest
Output2:
    b

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[122] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        int word = s[i];
        freq[word] = 1;
    }

    for (int i = 97; i <= 122; i++)
    {
        if (freq[i] == 0)
        {
            cout << char(i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}
