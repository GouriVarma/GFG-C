//C Program to Swap Two Numbers

//Using temporary variable
// #include<stdio.h>
// int swap(int x,int y){
//   int temp;
//   temp=x;
//   x=y;
//   y=temp;
//   printf("After swapping a = %d and b = %d",x,y);
// }
// int main(){
//   int a,b;
//   printf("Enter a = ");
//   scanf("%d",&a);
//   printf("Enter b = ");
//   scanf("%d",&b);
//   swap(a,b);
//   return 0;
// }

//without temporary variable
#include<stdio.h>
int swap(int x,int y){
  x=x+y;
  y=x-y;
  x=x-y;
  printf("After swapping a = %d and b = %d",x,y);
}
int main(){
  int a,b;
  printf("Enter a = ");
  scanf("%d",&a);
  printf("Enter b = ");
  scanf("%d",&b);
  swap(a,b);
  return 0;
}