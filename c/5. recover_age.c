/*
Question:
    Mokbul has two sons - Abul and Babul. Mokbul remembers Abul's age but has forgotten Babul's age. But he remembers their average age. Help Mokbul remember Babul's Age.
    Hint: average age = (abul's age + babul's age)/2. How can you recover babul's age from this equation?

Input condition:
    The first and only line of input contains two integers. First integer represents Abul's age. Second Integer represents the average age both between -1\, 000−1000 and 1\, 0001000.
Output Condition:
    Output Babul's age on a single line.

Input: 11 15
Output: 19
*/


#include<stdio.h>

int main(){
    int a, b, babul_age;

    scanf("%d %d", &a, &b);

    babul_age = (b*2)-a;
    printf("%d", babul_age);

    return 0;
}
