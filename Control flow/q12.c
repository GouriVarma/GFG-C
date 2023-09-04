//C Program to Find LCM of Two Numbers

/*
lOGIC

LCM of 2 numbers is the smallest number divisible by both the numbers.

eg:lcm of 2 and 3 is 6(6 is the smallest no divisible by both 2&3)

1. find max of the two number
2.inside a infinite loop check if max is divisible by both num1 and num2
3.if yes then max is the lcm and then break frm the loop
4.else increment max

*/


// #include<stdio.h>
// int main(){
//   int x=15,y=20;
//   int max = (x>y)?x:y;
//   while(1){
//     if(max%x==0 && max%y==0){
//       printf("lcm is %d",max);
//       break;
//     }
//     max++;
//   }
//   return 0;
// }



/* now to find GCD

GCD is the largest number that divides 2 of them

eg   2|36,60
       2|18,30
         3|9,15
          |3,5
      

            hcf / gcd = 2x2x3 = 12

*/

#include<stdio.h>
int main(){
  int x=15,y=20;
  int min = (x<y)?x:y;
  while(1){
    if(x%min==0 && y%min==0){
      printf("hcf is %d",min);
      break;
    }
    min--;
  }
  return 0;
}
