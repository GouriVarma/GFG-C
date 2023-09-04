//C Program to Display Armstrong Number Between Two Intervals 

#include<stdio.h>
#include<math.h>
int main(){
  int n1,digit=0,rem,sum=0,num1,num2;
  scanf("%d%d",&num1,&num2);
  
  for(int i=num1;i<=num2;i++){
    n1=i;
    while(n1!=0)
    {
      n1=n1/10;
      digit++;
    }
    n1=i;
    while(n1!=0)
    {
      rem=n1%10;
      sum=sum+pow(rem,digit);  
      n1=n1/10;
    }
    if(sum==i)
    {
      printf(" %d ",i);
    }
    digit=0,rem=0,sum=0;
  }
}