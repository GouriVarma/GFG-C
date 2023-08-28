//C Program to Check Leap Year
/* Conditions for leap year:
    1.The year should be a multiple of 400
    2.The year should be a multiple of 4 and the year should not be a multiple of 100

    eg: 2016 = exactly divisible by 4 
               not exactly divisibe by 400
               not exactly divisible by 100

        2400 = exactly divisible by 400
               not exactly divisibe by 4
               not exactly divisible by 100

        2200 = exactly divisible by 4         (not leap----1700,1800,1900,2100,2200,2300)
               not exactly divisibe by 400
               exactly divisible by 100..
        
    logic to be a leap year: (exactly divisible by 400 )or  (exactly div by  4 but not exactly dividible by 100)

*/
#include<stdio.h>
int main(){
  int year;
  scanf("%d",&year);
  if(year%400==0 || (year%4==0 && year%100!=0)){
      printf("leap year");
  }
  else{
    printf("not a leap year");
  }
}
