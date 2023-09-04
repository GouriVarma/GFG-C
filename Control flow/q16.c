//C Program to Reverse a Number
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
  printf("%d",sum);
}