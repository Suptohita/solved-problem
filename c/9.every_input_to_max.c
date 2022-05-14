/*
question:
    You are given N items. The i’th item has value Ai. You can increase any item’s value by any amount. You need to make the value of all the items equal by doing this operation any number of times. What is the minimum total amount needed to make all the items equal?

input condition:
    The first line contains the integer N (1 ≤ N ≤ 100) .
    The second line contains N integers A1, A2, ..., An, here Ai (0 ≤ Ai ≤ 106) .

input1: 
    5
    0 1 2 3 4

output1: 10

input2:
    5
    1 1 0 1 1

output2: 1
*/


#include <stdio.h>

int main(){
    int a, max;
    scanf("%d", &a);
    int arr[100];
    max=0;


    for(int i=0; i<a; i++){
        int b;
        scanf("%d", &b);
        arr[i] = b;
    }

    for(int i = 0; i<a; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }

    int output = 0;

    for(int i = 0; i<a; i++){
        int d;
        d = max-arr[i];
        output += d;
    }
    printf("%d", output);
}