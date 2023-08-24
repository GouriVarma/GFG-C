//C Program to Check Whether a Number is Positive, Negative, or Zero


#include<stdio.h>
int main(){
  int n;
  printf("enter num: ");
  scanf("%d",&n);
  if(n>0)
    printf("Number is positive");
  else if(n==0)
    printf("number is 0");
  else
    printf("number is negative");
}