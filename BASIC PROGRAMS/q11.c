//C Program to Add Two Complex Numbers 
#include<stdio.h>

typedef struct cmplx{
  int real;
  int img;
}complex;


complex add(complex x, complex y);
 
int main(){
  complex a,b,sum;
  a.real=5;
  a.img=9;
  b.real=8;
  b.img=5;
  printf("a = %d + i%d\n",a.real,a.img);
  printf("b = %d + i%d\n",b.real,b.img);
  sum = add(a,b);
  printf("\nsum = %d + %di", sum.real, sum.img);
  return 0;

}
complex add(complex x,complex y)
{
  complex add;
  add.real =x.real+y.real;
  add.img =x.img+y.img;
  return(add);
}