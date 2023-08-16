//C Program to Check Whether a Number is Prime or Not
//Naive Approach ------time complexity = O(n),space complexity =O(1)
// #include<stdio.h>
// int main(){
//   int flag=1,n;
//   printf("Enter number to be checked: ");
//   scanf("%d",&n);
//   for(int i=2;i<=n/2;i++){
//     if(n%i==0)
//       flag=0;
//       break;
//   }
//   if(flag)
//     printf("%d is Prime",n);
//   else
//     printf("%d is not Prime",n);
//   return 0;
// }

//USING sqrt(N)--------------This method is the best (but not optimal) method to check prime numbers. In mathematics, the smallest and greater than one factor of a number cannot be more than the square root of that number. 
// N = a * b  where, 1 < a ≤ b < n
// By multiplying the relation a ≤ b by a, the relation becomes:

// a2 ≤ ab     
// By multiplying the relation a ≤ b by b, the relation becomes: 

// ab ≤ b2
// From the above-mentioned inequalities, the relation becomes: 

// a2 ≤ ab ≤ b2
// We know that N = a * b, so by replacing a * b with N, the following relation is obtained:

// a2 ≤ N ≤ b2
// Taking the square root of the equation, considering both a and b as positive numbers, we get:

// a ≤ sqrt(N) ≤ b
// C program to check if a number is prime using sqrt(n)
//time complexity = O(n^1/2),space complexity =O(1)
#include <math.h>
#include <stdio.h>
int main()
{
    int N = 77;
    int flag = 1;
 
    double sqroot = sqrt(N);
   
    // Iterate from 2 to sqrt(n)
    for (int i = 2; i <= sqroot; i++)
    {
 
        // If n is divisible by any number between 2 and
        // sqrt(n), it is not prime
        if (N % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (flag) {
        printf("%d is a prime number", N);
    }
    else {
        printf("%d is not a prime number", N);
    }
 
    return 0;
}