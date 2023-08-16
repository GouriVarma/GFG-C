//C Program to Print Prime Numbers From 1 to N 

#include<stdio.h>
void main(){
  int n,flag=1,i,j,count;
  printf("enter upto how many numbers: ");
  scanf("%d",&n);
  printf("Prime numbers from 1 to %d are : ",n);
  for(i=1;i<=n;i++){
    count=0;
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        count++;
        break;
      }
    }
    if(count==0 && i!=1)
      printf("%d ",i);
  }
}