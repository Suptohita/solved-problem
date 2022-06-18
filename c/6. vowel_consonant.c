/*
Question:
    Neil is playing with alphabets. There are 26 alphabets in English Language. 5 of them are vowels: a, e, i, o and u.
    As Neil is a kid, he can't tell it clearly. If he gives you an alphabet c, can you tell him whether it is vowel or consonant.

input: any english character

output: If character is a vowel, print vowel. Otherwise, print consonant.
*/


#include<stdio.h>

int main(){
    char word;
    scanf("%c", &word);

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }


    return 0;
}
