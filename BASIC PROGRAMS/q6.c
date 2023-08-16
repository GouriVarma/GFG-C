//C Program to Multiply two Floating-Point Numbers 

#include<stdio.h>
float multiply(float a, float b){
  return a*b;
}
int main(){
  float x,y,product;
  printf("enter numbers: ");
  scanf("%f %f",&x,&y);
  printf("Product of %.3f, %.3f id %.3f",x,y,multiply(x,y));
  return 0;
}