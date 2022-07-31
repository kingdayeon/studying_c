#include<stdio.h> //Include a ‘stdio.h’ file to my code

int Fibonacci(int); //function declarations

int main(){ //create a main function
  int num; //declaring

  printf("Enter any number to find nth fibonacci term:"); //printf function
  scanf("%d", &num); //store the input value of integer
  printf("%d fibonacci term is %d",num,Fibonacci(num-1)); //printf function with a function call
  
  return 0; //way to exit the function
}

int Fibonacci(int a) {//function definition
   if(a == 0){
      return 0;
   } else if(a == 1) {
      return 1;
   } else {
      return (Fibonacci(a-1)+Fibonacci(a-2)); //recursion
   } 
}
