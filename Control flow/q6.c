//C Program to Print Alphabets From A to Z Using Loop

// #include<stdio.h>
// int main(){
//   for(int i=0;i<26;i++)
//    printf("%c",i+97);
//   printf("\n");
//   for(int i=0;i<26;i++)
//    printf("%c",i+65);
// }

#include<stdio.h>
int main(){
  for(char i='A';i<='Z';i++)
   printf("%c",i);
  printf("\n");
  for(char i='a';i<='z';i++)
   printf("%c",i);
}