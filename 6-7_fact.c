#include<stdio.h> //Include a ‘stdio.h’ file to my code

int factorial(int); //function declarations

int main(){ //create a main function
  int num; //declaring

  printf("Enter number: "); //printf function
  scanf("%d", &num); //store the input value of integer
  printf("%d\n", factorial(num)); //printf function with a function call
  
  return 0; //way to exit the function
}

int factorial(num){//function definition
  if(num==1) //if statement
    return 1;
  return num * factorial(num-1);//recursion
}
