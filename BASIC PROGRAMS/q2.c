//print your name

// #include<stdio.h>        //header file for input output function
// int main(){              //main function where execution of program begins
//   printf("Name: Gouri G Varma");  
//   return 0;              //returns value from a function and indicates its end.
// }

#include<stdio.h>        
int main(){
  char name[10];
  printf("enter name: "); 

  scanf("%s",name);          //user input    
  printf("Name: %s",name);  
  return 0;             
}

