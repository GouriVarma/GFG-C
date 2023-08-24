//C Program to Check Whether Number is Even or Odd

#include<stdio.h>
int check(int a){
  if(a%2==0)
    printf("Number is even");
  else
    printf("number is odd");
}
int main(){
  int n;
  printf("enter num: ");
  scanf("%d",&n);
  check(n);
  return 0;
}
