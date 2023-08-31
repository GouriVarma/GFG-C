//C Program to Generate Multiplication Table 

#include<stdio.h>
int main(){
  int n,i;
  printf("enter number whose table is needed: ");
  scanf("%d",&n);
  for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",i,n,i*n);
  }
}