//C Program to Check Whether a Number is a Palindrome or Not 

#include<stdio.h>
#include<math.h>
int main(){
  int n,n1,digit=0,rem,sum=0;
  scanf("%d",&n);
  n1=n;
  while(n!=0){
    n=n/10;
    digit++;
  }
  n=n1;
   while(n!=0){
    rem=n%10;
    sum = sum+rem*pow(10,digit-1);
    digit--;
    n=n/10;
  }
  printf("%d \n%d\n",sum,n1);
  if(sum==n1)
    printf("%d is a palindrome number",n1);
  else
    printf("%d is not a palindrome number",n1);
}