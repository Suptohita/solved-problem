/*
Question:
    Elsa doesn't love strings. But he really likes letter 'a'. He assumes a string beautiful if more than half of it's character are 'a'. For example some beautiful strings are "baaba", "a", "aqawa" , but "abb", "waeaia" are not.
    As Elsa only loves beautiful strings, so he wanted to erase some character (possibly zero) from the string s such that the string become longest beautiful string. So he wants to know what will be the size of longest string remaining after erase some character( possibly zero) to get a beautiful string.
    It is guaranteed that the string will consist of atleast one 'a'. So answer always exists.

Input condition:
    The first line contains a string s ( 1 <= |s| <= 50 ) consist of only lower case English letters. And it is guaranteed that there is at least one 'a' in string s ;

Output condition:
    Print a single line, the length of the longest beautiful string that Ashiq can get after erasing some character ( possibly zero ) from string s.

Input 1:
    xaxxxxa
Output 1:
    3

Input 2:
    aaabaa
Output 2:
    6

Input 3:
    ababababababababababababababababababababababababav
Output 3:
    49

Input 4:
    dya
Output 4:
    1

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    scanf("%s", str);
    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
        {
            count++;
        }
    }

    if (count > len / 2)
    {
        printf("%d", len);
    }

    if (count <= len / 2)
    {
        printf("%d", 2*count - 1);
    }
}