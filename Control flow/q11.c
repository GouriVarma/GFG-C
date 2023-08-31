//C Program to Print Fibonacci Series

#include<stdio.h>
int main(){
  int n,fn=0,sn=1,tn;
  printf("enter upto which number series to be printed : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i>2){
      tn = fn+sn;
      fn=sn;
      sn=tn;
      printf("%d ",tn);
    }
    if(i==1){
      printf("%d ",fn);   
    }
     if(i==2){
      printf("%d ",sn);   
    }
    
  }
}