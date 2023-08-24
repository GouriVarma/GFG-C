//C Program to Find Largest Number Among Three Numbers

#include<stdio.h>
int check(int a,int b,int c){
  if(a>=b && a>=c)
    printf("%d is big",a);
  else if(b>=a && b>=c)
   printf("%d is big",b);
  else
    printf("%d is big",c);
}
int main(){
  int n1,n2,n3;
  printf("enter num1: ");
  scanf("%d",&n1);
  printf("enter num2: ");
  scanf("%d",&n2);
  printf("enter num3: ");
  scanf("%d",&n3);
  check(n1,n2,n3);
  return 0;
}
