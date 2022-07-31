//Q2
#include <stdio.h>//Include a ‘stdio.h’ file to my code

int main(void) { //create a main function

  int num1, num2, sum = 0;//declare a variable of integer 
  
  int * ptr1 = &num1; //declare and initialize an pointer
  int * ptr2 = &num2; //declare and initialize an pointer

  printf("Enter any two numbers: "); //printf function
  scanf("%d %d",&num1, &num2); //store the input value

  sum = *ptr1 + *ptr2; //Add the values using pointer

  printf("Sum = %d",sum); //printf function
    
  return 0; //way to exit the function
}
