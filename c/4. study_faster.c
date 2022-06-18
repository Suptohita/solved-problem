/*
Question:
    Taro has to study for TT hours for an exam.
    Fortunately, he can jump to World B where time passes XX times as fast as it does in our world (World A).
    In other words, While (X \times t)(X×t) hours pass in World B, tt hours pass in World A.
    How many hours will pass in World A while Taro studies for TT hours in World B?

Input condition:
    Input is given from Standard Input in the following format: T X
Output condition:
    Print the number of hours that will pass in World A.
    The output will be regarded as correct when its absolute or relative error from the judge's output is at most 10^−32
Input: 8 3
Output: 2.6666667
*/

#include<stdio.h>

int main(){
    float t, x;
    scanf("%f %f", &t, &x);
    printf("%f", t/x);

    return 0;
}
