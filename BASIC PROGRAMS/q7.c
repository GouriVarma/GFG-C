//C Program to Print the ASCII Value of a Character
/*

American Standard Code for Information Interchange (ASCII) is a character encoding standard that assigns a unique numerical value to all characters including special symbols. In C programming, the ASCII value of the character is stored instead of the character itself. For example, the ASCII value of ‘A’ is 65.

Each character or special character is represented by some ASCII code.
Each ASCII code occupies 7 bits in memory.
Each character variable is assigned an ASCII value ranging from 0 to 127.

*/

#include<stdio.h>
int main(){
  char c;
  printf("enter character: ");
  scanf("%c",&c);
  printf("ASCII value of %c is %d",c,c);
  return 0;
}
