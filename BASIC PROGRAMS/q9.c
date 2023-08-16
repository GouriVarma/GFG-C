//C Program to Calculate Fahrenheit to Celsius
// C = (F-32)*5/9

#include<stdio.h>
int main(){
  float f,c;
  printf("enter temperature in fahrenheit: ");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("Temperature in celsius is : %.2f",c);
  return 0;
}