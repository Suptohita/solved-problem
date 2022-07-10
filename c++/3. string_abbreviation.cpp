/*
Problem:
    The word internationalization is sometimes abbreviated to i18n. This comes from the fact that there are 1818 letters between the first i and the last n.
    You are given a string ss of length at least 33 consisting of lowercase English letters. Abbreviate ss in the same way.

Input1:
    internationalization
Output2:
    i18n

Input2:
    smiles
Output2:
    s4s
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    cout << s[0] << len - 2 << s[len - 1] << endl;
}
