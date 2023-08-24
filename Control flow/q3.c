//C Program to Check Whether a Character is Vowel or Consonant 


#include<stdio.h>
void check(char a){
  int flag = 0;
  char vowel[11] = {'a','A','E','e','i','I','O','o','u','U'};
  for(int i=0;vowel[i];i++){
    if(a==vowel[i]){
      flag = 1;
      break;
    }
  }
  if(flag==1)
    printf("vowel");
  else
    printf("consonant");
}
int main(){
  char c;
  printf("enter letter: ");
  scanf("%c",&c);
  check(c);
  return 0;
}
