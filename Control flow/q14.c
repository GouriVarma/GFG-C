//C Program to Display Armstrong Numbers Between 1 to 1000 

#include<stdio.h>
#include<math.h>
int main(){
  int n1,digit=0,rem,sum=0;
  for(int i=1;i<=1000;i++){
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