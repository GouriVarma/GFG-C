//C Program for Area And Perimeter Of Rectangle 
#include<stdio.h>
float a,a1;
float area(float a,float a1){
  printf("area of the rectangle is %lf\n",a*a1);
}
float perimeter(float a,float a1){
  printf("perimeter of the rectangle is %f",2*(a+a1));
}

int main(){
  float l,b;
  printf("enter length and breadth of the rectangle: ");
  scanf("%f %f",&l,&b);
  area(l,b);
  perimeter(l,b);
}

