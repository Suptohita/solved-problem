/*
question:
    Mahir sent a friend request to a girl's profile with a pretty profile picture only to find out it was a fake account handled by a boy. He is tired of dealing with fake accounts and asks for your help to recognize the fake id. You are provided with the username of the profile that Mahir encounters. You have to find if it is the profile of a girl or a boy. The way to distinguish between the account of boy and girl depends on the number of distinct characters in the username. If this number is odd, the profile is of a boy otherwise it is of a girl.

Input condition:
    The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Input1: rajkonna
Input2: yamin

expected output:
    If the account belongs to a girl, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
*/


#include <stdio.h>
#include <string.h>
 
int main()
{
  //Input string
  char str[100];
  gets(str);
  
  int length= strlen(str);

  for(int i=0; i<length; i++){
      

    char ch = str[i];

    for(int j=i+1; j<length; ){
      
      if(str[i] == str[j]){
        for(int k=j; k<length; k++){
          str[k] = str[k+1];
        }
        length--;
        
      } else {
          j++;
      }
    } 
  }

  if (strlen(str) % 2 == 0){
      printf("CHAT WITH HER!");
  }
  else if (strlen(str) % 2 != 0){
      printf("IGNORE HIM!");
  }

  return 0;
}
