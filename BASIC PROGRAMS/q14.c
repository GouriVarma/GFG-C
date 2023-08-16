//C Program to Find Compound Interest
#include<stdio.h>
#include<math.h>
int main(){
  float p =1000,r=5,t=2,a,ci;
  a=p*pow((1+r/100),t);
  ci = a-p;
  printf("ci is %f",ci);
  return 0;
}