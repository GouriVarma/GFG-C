//C Program to Make a Simple Calculator 


#include<stdio.h>
#include<stdlib.h>
int add(int a,int b){
  printf("result = %d",a+b);
}
int sub(int a,int b){
  printf("result = %d",a-b);
}
int prod(int a,int b){
  printf("result = %d",a*b);
}
int divd(int a,int b){
  printf("result = %d",a/b);
}
int main(){
  double n1,n2;
  char op;
  scanf("%lf",&n1);
  scanf("%lf",&n2);
  while (1)
  {
    scanf(" %c",&op);
    if(op=='x')
      exit(0);
    
    switch (op)
    {
    case '+':
      add(n1,n2);
      break;
    case '-':
      sub(n1,n2);
      break;
    case '*':
      prod(n1,n2);
      break;
    case '/':
      divd(n1,n2);
      break;
    
    default:
      printf("error");
      break;
    }
    printf("\n");
  }
}
