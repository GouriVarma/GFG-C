//C Program to Calculate Sum of Natural Numbers 

// #include<stdio.h>
// int main(){
//   int n,sum=0;
//   scanf("%d",&n);
//   for(int i=0;i<=n;++i){
//     sum=sum+i;
//   }
//   printf("%d",sum);
// }

//using while loop
// #include<stdio.h>
// int main(){
//   int n,sum=0;
//   scanf("%d",&n);
//   while(n){
//     sum=sum+n;
//     n--;
//   }
//   printf("%d",sum);
// }

//using recursion
#include<stdio.h>
int sumofnat(int num){
    if(num!=0)
      return num + sumofnat(num-1);
    else
      return num;
}

int main(){
  int n=10;
  printf("sum = %d",sumofnat(n));
}
