/*
question:
    Amr speaks to someone on chat and notices that the first character he writes does not start with a capital letter. Help Amr gets the same word with an upper character.

input condition:
    A single word consists of lowercase and uppercase letters. Note that the length of the word will not exceed 10^3.

input1: konjac
input2: ApPLe

expected output1: Konjac
expected output2: ApPLe
*/

#include <stdio.h>
#include <string.h>

int main( )
{
  char word[10000];
  gets(word);

  if(word[0] >=97 && word[0] <= 122){
    word[0] = word[0] - 32;
    printf("%s", word);
  }
  else{
    printf("%s", word);
  }
}