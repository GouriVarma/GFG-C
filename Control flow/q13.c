//C Program to Check Armstrong Number

/*
 An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.

 eg:  371,153,1634,
*/

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
  printf("digits %d",digit);
  n=n1;
  while(n!=0){
    rem=n%10;
    sum=sum+pow(rem,digit);  
    n=n/10;
  }
  printf("\nsum %d",sum);
  if(sum==n1)
   printf("\n%d is an armstrong number",n1);
  else
   printf("\n%d is not an armstrong number",n1);
 
}